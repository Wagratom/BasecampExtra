/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:23:31 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/20 20:16:21 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str)
	{
		str++;
		cont++;
	}
	return (cont);
}

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	b;

	b = ft_strlen(dest);
	b += ft_strlen(src);
	if (size != b)
		ft_strncat(dest, src, size - 1);
	else
		ft_strncat(dest, src, size);
	return (b);
}
