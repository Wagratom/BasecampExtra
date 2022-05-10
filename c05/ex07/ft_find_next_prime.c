/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:39:53 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/10 01:22:32 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = nb / 2;
	while (i-- && i != 1)
		if (nb % i == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (++nb)
	{
		if (ft_is_prime(nb))
			return (nb);
	}
	return (0);
}
