/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:43:16 by bankai            #+#    #+#             */
/*   Updated: 2022/05/13 14:03:29 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	read_files(int fd)
{
	char	buffer[4096];
	int		a;

	a = read(fd, buffer, 4096);
	buffer[a] = '\0';
	while (a)
	{
		if (errno)
		{
			write(2, strerror(errno), ft_strlen(strerror(errno)));
			return (0);
		}
		write(2, buffer, ft_strlen(buffer));
		a = read(fd, buffer, 4096);
		buffer[a] = '\0';
	}
	close(fd);
	return (1);
}

int	open_files(char **files)
{
	int	fd;
	int	i;

	i = 0;
	while (files[i])
	{
		fd = open(files[i], O_RDONLY);
		if (errno)
		{
			write(2, "cat: ", 7);
			write(2, strerror(errno), ft_strlen(strerror(errno)));
			return (0);
		}
		read_files(fd);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (-1);
	open_files(&argv[1]);
	return (0);
}
