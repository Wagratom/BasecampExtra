/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 21:02:22 by bankai            #+#    #+#             */
/*   Updated: 2022/05/14 14:24:42 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	check_kb(char *str)
{
	int	numb;

	numb = 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		numb = (*str - '0') + (numb * 10);
		str++;
	}
	return (numb);
}

int	check_cmds(char **comands)
{
	int	bytes;

	if (ft_strcmp(comands[2], "-c"))
	{
		write(2, "tail: invalid command, ", 23);
		write(2, "use <comand> <file name> <flag> <bytes>\n", 41);
		return (0);
	}
	bytes = check_kb(comands[3]);
	if (!bytes)
	{
		write(2, "tail: invalid numbers of bytes\n", 31);
		return (0);
	}
	return (bytes);
}

int	end_file(int fd, int bytes)
{
	char	*buffer;
	char	*file_tot;
	char	*file_end;

	file_tot = (char *) malloc(4096);
	buffer = (char *) malloc(4096);
	file_tot[0] = '\0';
	while (read(fd, buffer, 4096))
	{
		file_tot = ft_strjoin(file_tot, buffer);
		free(buffer);
		buffer = (char *) malloc(4096);
		read(fd, buffer, 4096);
	}
	file_end = &file_tot[ft_strlen(file_tot) - bytes];
	write(2, file_end, bytes);
	if (errno)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		return (0);
	}
	close (fd);
	return (1);
}

int	main(int argc, char *argv[])
{
	int	bytes;
	int	fd;

	if (argc == 4)
	{
		bytes = check_cmds(argv);
		fd = open(argv[1], O_RDONLY);
		if (!bytes || fd == -1)
			return (1);
		end_file(fd, bytes);
	}
	else if (argc == 3)
		write(2, "invalid numebrs of arguments\n", 29);
	else if (argc == 2)
		ft_display_file(argv[1]);
	return (0);
}
