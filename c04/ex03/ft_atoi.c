/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 23:21:23 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/20 20:29:23 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	n;

	i = 0;
	signal = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (str[i] - '0') + (n * 10);
		i++;
	}
	n *= signal;
	return (n);
}
