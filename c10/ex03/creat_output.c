/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 22:45:13 by bankai            #+#    #+#             */
/*   Updated: 2022/05/22 01:36:36 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	*conv_file_str(int fd, char *str_file)
{
	char	*buffer;

	buffer = (char *) malloc(4096);
	str_file[0] = '\0';
	while (read(fd, buffer, 4096))
	{
		str_file = ft_strjoin(str_file, buffer);
		free(buffer);
		buffer = (char *) malloc(4096);
		read(fd, buffer, 4096);
	}
	return (str_file);
}

char	*conv_letthex(char letter, char *base)
{
	char	*l_hex;

	l_hex = (char *) malloc(3);
	l_hex[2] = '\0';
	if (letter > 15)
	{
		l_hex[1] = base[letter % 16];
		letter /= 16;
		l_hex[0] = base[letter % 16];
	}
	else
	{
		l_hex[0] = '0';
		l_hex[1] = base[letter % 16];
	}
	return (l_hex);
}

char	**conv_str_hex(char *str, char **str_hex)
{
	char	*base_16;
	int		i;

	base_16 = "0123456789abcdef";
	i = 0;
	while (*str)
	{
		str_hex[i] = conv_letthex(*str, base_16);
		i++;
		str++;
	}
	str_hex[i] = '\0';
	return (str_hex);
}

int	creat_output(int fd)
{
	char	*str;
	char	**str_hex;

	str = (char *) malloc(4096);
	str = conv_file_str(fd, str);
	str_hex = (char **) malloc((ft_strlen(str) * 2) * sizeof (char **));
	str_hex = conv_str_hex(str, str_hex);
	if (check_error())
		return (1);
	printf_output(str, str_hex);
	return (0);
}
