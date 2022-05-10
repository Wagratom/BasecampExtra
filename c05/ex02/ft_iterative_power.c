/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:57:32 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/22 02:38:57 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	mult;

	i = 0;
	mult = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0 && power > 0)
		return (0);
	while (i++ < power)
	{
		mult *= nb;
	}
	return (mult);
}
