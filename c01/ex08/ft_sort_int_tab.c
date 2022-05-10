/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:29:21 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/14 05:38:35 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	conter;
	int	conter2;
	int	aux;
	int	i;

	conter = 0;
	i = 0;
	while (i <= size)
	{
		while (conter <= size - 2)
		{
			conter2 = conter + 1;
			if (tab[conter] > tab[conter2])
			{
				aux = tab[conter];
				tab[conter] = tab[conter2];
				tab[conter2] = aux;
			}
			conter++;
		}
		conter = 0;
		i++;
	}
}
