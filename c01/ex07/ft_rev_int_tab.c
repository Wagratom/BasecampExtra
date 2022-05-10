/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1022/04/11 16:28:16 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/14 19:05:07 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	repeticao;

	repeticao = size / 2;
	i = 0;
	size = size - 1;
	while (i < repeticao)
	{
		aux = tab[i];
		tab[i] = tab[size];
		tab[size] = aux;
		i++;
		size--;
	}	
}
