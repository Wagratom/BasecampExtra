/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 06:45:54 by bankai            #+#    #+#             */
/*   Updated: 2022/05/10 01:07:50 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	print_reverse(char *str)
{
	int	size;

	size = ft_strlen(str);
	while (size--)
		write(1, &str[size], 1);
	free (str);
}

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

void	end_putnbr_base(int nbr, unsigned int size_base, char *base)
{
	unsigned int	nb;
	char			*result;
	int				i;
	char			*resp_base;

	result = (char *) malloc(sizeof(char *) * 1);
	resp_base = base;
	i = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nb = -nbr;
	}
	else
		nb = nbr;
	while (nb >= size_base)
	{
		result[i] = resp_base[nb % size_base];
		nb /= size_base;
		i++;
	}
	if (nb > 0)
		result[i++] = resp_base[nb];
	result[i] = '\0';
	print_reverse(result);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;

	size = check_base(base);
	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (size <= 1)
		return ;
	end_putnbr_base(nbr, size, base);
	return ;
}
