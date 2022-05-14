/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:04:56 by bankai            #+#    #+#             */
/*   Updated: 2022/05/14 11:31:51 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h> 
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_display_file(char *file)
{
	char	buffer[4096];
	int		fd;
	int		a;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.", 17);
		return (0);
	}
	a = 1;
	while (a)
	{
		a = read(fd, buffer, 4096);
		if (a < 0)
			return (0);
		write(1, &buffer, a);
	}
	close(fd);
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		if (argc < 2)
			write(1, "File name missing.", 18);
		else
			write(1, "Too many arguments.", 19);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
