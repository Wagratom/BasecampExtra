/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 01:40:40 by bankai            #+#    #+#             */
/*   Updated: 2022/05/22 02:45:14 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	check_arguments3(char **comands, int fd, int *i)
{
	if (!ft_strcmp(comands[1], "-C"))
		fd = open(comands[2], O_RDONLY);
	else if (!ft_strcmp(comands[2], "-C"))
		fd = open(comands[1], O_RDONLY);
	else if (comands[1][0] == '-' || comands[2][0] == '-')
	{
		write(2, "invalid argument: use: -C\n", 26);
		return (1);
	}
	else
		*i = 4;
	return (fd);
}

int	validacion_arg3(char **argv, int *flag)
{
	int	fd;

	fd = check_arguments3(argv, fd, flag);
	if (fd == 1 || check_error())
		return (1);
	if (fd == 0)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			fd = open(argv[2], O_RDONLY);
			if (fd == -1)
			{
				check_error();
				return (1);
			}
		}
	}
	return (fd);
}

int	main(int argc, char *argv[])
{
	int	fd;
	int flag;

	flag = 0;
	if (argc > 1 || argc <= 3)
	{
		if (argc == 3)
		{
			fd = validacion_arg3(argv, &flag);
			if (flag == 4)
				ft_display_file(argv[1]);
			else if (fd > 2)
				creat_output(fd);
			return (1);
		}
		else
		{
			fd = open(argv[1], O_RDONLY);
			if (fd > 2)
				ft_display_file(argv[1]);
			return (1);
		}
	}
	write(2, "invalid numbers of arguments\n", 29);
	return (0);
}
