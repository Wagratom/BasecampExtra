/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:04:56 by bankai            #+#    #+#             */
/*   Updated: 2022/05/14 11:19:43 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_display_file(char *file)
{
	char	buffer[4096];
	int		fd;
	int		a;

	fd = open(file, O_RDONLY);
	a = read(fd, buffer, 4096);
	while (a)
	{
		write(1, &buffer, a);
		a = read(fd, buffer, 4096);
	}
	if (errno)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		return (0);
	}
	close(fd);
	return (1);
}
