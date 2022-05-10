/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wagratom111@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:31:07 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/27 11:29:32 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (range[0] == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
