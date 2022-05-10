/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:01:20 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/18 23:04:16 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
		count++;
	while (src[count2])
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}
