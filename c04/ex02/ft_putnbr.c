/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:20:12 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/21 02:20:55 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_zero(int n)
{
	if (n == 0)
		write(1, "0", 1);
}

void	ft_putnbr(int n)
{	
	int	number;
	int	divider;
	int	flag;

	divider = 1000000000;
	flag = 0;
	check_zero(n);
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n < 0 && n != -2147483648)
	{
		n = (n * -1);
		write(1, "-", 1);
	}
	while (divider && (n != -2147483648))
	{	
		number = (n / divider);
		if (!(number == 0))
			flag = 1;
		if (flag == 1)
			ft_putchar (number + '0');
		n = n % divider;
		divider = divider / 10;
	}
}
