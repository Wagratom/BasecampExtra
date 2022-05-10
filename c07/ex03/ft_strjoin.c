/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:09:09 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/10 13:30:52 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}


char	*ft_strcat(char *str, char *str2)
{
	int	count;
	int	count2;

	count = ft_strlen(str);
	count2 = -1;
	while (str2[++count2])
		str[count + count2] = str2[count2];
	str[count + count2] = '\0';
	return (str);
}

int	total_size(char **strs, int size)
{
	int	tot;
	int	i;

	i = 0;
	while (size--)
	{
		tot += (ft_strlen(strs[i]));
		i++;
	}
	return (tot);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		size_tot;
	int		i;

	size_tot = ((ft_strlen(sep) * size) - ft_strlen(sep)) + 1;
	size_tot += total_size(strs, size);
	result = (char *) malloc (size_tot);
	if (size == 0)
		return (result);
	i = 0;
	size = size -1;
	while (size--)
	{
		ft_strcat(result, strs[i]);
		ft_strcat(result, sep);
		i++;
	}
	ft_strcat(result, strs[i]);
	return (result);
}
