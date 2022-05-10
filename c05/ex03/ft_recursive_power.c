/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:05:02 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/22 02:41:52 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (0);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	return (nb *= ft_recursive_power(nb, --power));
}
