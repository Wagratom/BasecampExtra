/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:18:15 by bankai            #+#    #+#             */
/*   Updated: 2022/05/10 12:57:48 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*convert_base(int nbr, char *base, int size_b);

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

int	convert_numb(char *str, char *base, int size)
{
	int	result;
	int	flag;
	int	j;

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		size_bt;
	int		size_bf;
	int		signal;
	int		numb;

	size_bt = check_base(base_to);
	size_bf = check_base(base_from);
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
	printf("numb line 91: %d\n", numb);
	result = convert_base(numb, base_to, size_bt);
	return (result);
}

int main()
{
	char	*result;

	result = ft_convert_base("fd", "0123456789abcdef", "0123456789");
	printf("%s", result);
}