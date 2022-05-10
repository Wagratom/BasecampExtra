/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:33:17 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/23 06:02:42 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = (char *) malloc(ft_strlen(src) + 1);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
