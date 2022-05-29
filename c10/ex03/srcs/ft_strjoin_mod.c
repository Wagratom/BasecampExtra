/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_mod.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 11:40:38 by bankai            #+#    #+#             */
/*   Updated: 2022/05/22 00:01:51 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_hexdump.h"

char	*ft_strjoin(char *str1, char *str2)
{
	char	*result;
	int		size_result;
	int		i;
	int		j;

	size_result = ft_strlen(str1);
	size_result += ft_strlen(str2);
	result = (char *) malloc (size_result + 1);
	i = 0;
	while (str1[i])
	{
		result[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j])
	{
		result[i + j] = str2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
