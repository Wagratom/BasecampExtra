/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:18:15 by bankai            #+#    #+#             */
/*   Updated: 2022/05/10 15:18:48 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_base(char *s1)
{
	int	count;
	int	j;

	j = 0;
	while (s1[j])
	{
		count = j + 1;
		while (s1[count])
		{
			if (s1[j] == s1[count])
				return (0);
			count++;
		}
		if (s1[j] == '-' || s1[j] == '+')
			return (0);
		j++;
	}
	return (j);
}

long int	convert_numb(char *str, char *base, int size)
{
	long int	result;
	int			flag;
	int			j;

	result = 0;
	flag = 0;
	j = 0;
	while (*str)
	{
		while (base[j])
		{
			if (*str == base[j])
			{
				result = j + result * size;
				flag = 1;
			}
			j++;
		}
		if (!flag)
			break ;
		flag = 0;
		j = 0;
		str++;
	}
	return (result);
}

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

char	*convert_base(long int nbr, char *base, int size_b)
{
	char	*result;
	int		size_n;

	size_n = count_numb(nbr, size_b);
	result = (char *) malloc(size_n + 1);
	result[size_n] = '\0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		result[--size_n] = base[nbr % size_b];
		nbr /= size_b;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	numb;
	int			size_bf;
	int			size_bt;
	int			signal;
	char		*result;

	size_bf = check_base(base_from);
	size_bt = check_base(base_to);
	if (size_bt <= 1 || size_bf <= 1)
		return (0);
	signal = 1;
	while ((*nbr >= 9 && *nbr <= 13) || *nbr == 32)
		nbr++;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			signal *= -1;
		nbr++;
	}
	numb = convert_numb(nbr, base_from, size_bf);
	numb *= signal;
	result = convert_base(numb, base_to, size_bt);
	return (result);
}
