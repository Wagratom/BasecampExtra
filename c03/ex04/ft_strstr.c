/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 04:40:00 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/11 03:05:09 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
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

char	*ft_strstr(char *str, char *to_find)
{
	int	a;

	if (to_find[0] == '\0')
		return (str);
	a = ft_strlen(to_find);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (!ft_strncmp(str, to_find, a))
				return (str);
		}
		str++;
	}
	return (0);
}
