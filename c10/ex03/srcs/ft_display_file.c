/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:04:56 by bankai            #+#    #+#             */
/*   Updated: 2022/05/22 02:21:49 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_hexdump.h"

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
