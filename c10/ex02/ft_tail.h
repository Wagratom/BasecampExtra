/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:55:52 by bankai            #+#    #+#             */
/*   Updated: 2022/05/14 14:26:48 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# include <string.h>
# include <stdlib.h>

char	*ft_strjoin(char *str1, char *str2);
int		ft_display_file(char *file);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);

#endif