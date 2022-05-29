/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 22:49:29 by bankai            #+#    #+#             */
/*   Updated: 2022/05/22 02:27:18 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <fcntl.h>
# include <stddef.h>
# include <unistd.h>
# include <errno.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

//my function

int		check_error(void);
int		creat_output(int fd);
void	printf_output(char *str,char **str_hex);

// my library

char	*ft_strjoin(char *str1, char *str2);
char	*ft_strcpy(char *dest, char *src);

int		ft_strcmp(char *s1, char *s2);
int     ft_display_file(char *file);
int		ft_strlen(char *str);

void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif