/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:34:26 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/20 20:13:43 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				count;
	unsigned int	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
		count++;
	while (count2 < nb && src[count2] != '\0')
	{
		dest[count + count2] = src[count2];
		count2++;
	}
	dest[count + count2] = '\0';
	return (dest);
}
