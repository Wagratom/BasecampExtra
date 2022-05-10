/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:36:18 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/20 00:49:50 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n )
{
	unsigned int	count;

	count = 0;
	while (s1[count] || s2[count])
	{
		if (count == n)
			return (0);
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (s1[count] - s2[count]);
}
