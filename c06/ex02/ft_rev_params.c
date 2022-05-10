/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:25:12 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/21 14:08:21 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_argv(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc;
	j = 0;
	while (--i)
	{
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
	}
}

int	main(int argc, char **argv)
{
	print_argv(argc, argv);
}
