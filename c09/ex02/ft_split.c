/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:30:43 by bankai            #+#    #+#             */
/*   Updated: 2022/05/11 01:38:50 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	*up_sep(char *str, char *sep, int *a)
{
	int	count;

	*a = 0;
	while (sep[*a])
		*a += 1;
	while (!ft_strncmp(str, sep, *a) && *a)
	{
		count = *a;
		while (count--)
			str++;
	}
	return (str);
}

char	*ft_strcat_mod(char *str, char *sep, char *add)
{
	int	a;

	a = 0;
	str = up_sep(str, sep, &a);
	while (*str)
	{
		if (*str == *sep)
		{
			if (!ft_strncmp(str, sep, a))
			{
				str = up_sep(str, sep, &a);
				break ;
			}
		}
		*add = *str;
		add++;
		str++;
	}
	*add = '\0';
	return (str);
}

char	*ft_size(char *str, char *sep, int *size, int flag)
{
	char	*cpy;
	int		i;
	int		a;

	i = 0;
	a = 0;
	str = up_sep(str, sep, &a);
	cpy = str;
	while (cpy[++i])
	{
		if (cpy[i] == *sep)
		{
			if (!ft_strncmp(&cpy[i], sep, a))
			{
				if (flag != 0)
					break ;
				*size += 1;
				cpy = up_sep(&cpy[i], sep, &a);
			}
		}
	}
	if (flag != 0)
		*size = i;
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**matriz;
	char	*add;
	int		size;
	int		posi;

	size = 1;
	posi = 0;
	str = ft_size(str, charset, &size, 0);
	matriz = (char **) malloc(sizeof(char *) * size + 1);
	while (*str)
	{
		size = 0;
		ft_size(str, charset, &size, 1);
		add = (char *) malloc(sizeof(char) * size + 1);
		str = ft_strcat_mod(str, charset, add);
		matriz[posi++] = add;
	}
	matriz[posi] = '\0';
	return (matriz);
}
