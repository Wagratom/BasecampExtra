/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:17:55 by bankai            #+#    #+#             */
/*   Updated: 2022/05/10 12:58:48 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	count_numb(int nbr, int size)
{
	int	i;

	i = 0;
	if (nbr < 0)
		i++;
	while (nbr)
	{
		i++;
		nbr /= size;
	}
	return (i);
}

char	*convert_base(int nbr, char *base, int size_b)
{
	char	*result;
	int		size_n;

	size_n = count_numb(nbr, size_b);
	result = (char *) malloc(size_n + 1);
	result[size_n] = '\0';
	if (nbr < 0)
	{
		result[--size_n] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		result[--size_n] = base[nbr % size_b];
		nbr /= size_b;
	}
	return (result);
}