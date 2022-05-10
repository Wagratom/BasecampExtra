/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:56:03 by bankai            #+#    #+#             */
/*   Updated: 2022/05/10 01:39:21 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *s1)
{
	int		count;
	int		j;

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

int	ft_atoi_base(char *str, char *base)
{
	int	size_b;
	int	numb;
	int	signal;

	size_b = check_base(base);
	if (size_b <= 1)
		return (0);
	signal = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	numb = convert_numb(str, base, size_b);
	numb *= signal;
	return (numb);
}
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

void	ft_atoi_base_test(char *str, char *base, int expected_number)
{
	int ft_buff;

	ft_buff = ft_atoi_base(str, base);
	if (ft_buff != expected_number)
		printf("> KO, expected: %d got: %d\n", expected_number, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}
