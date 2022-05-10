/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:44:19 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/23 06:03:38 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*size;
	int	i;
	int	a;

	a = max - min;
	i = 0;
	if (min >= max)
	{
		size[0] = NULL;
		return (size);
	}
	size = (int *) malloc (a * sizeof (int));
	while (min <= max)
	{
		size[i] = min++;
		i++;
	}
	return (size);
}
