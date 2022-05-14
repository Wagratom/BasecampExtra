/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:44:02 by bankai            #+#    #+#             */
/*   Updated: 2022/05/14 11:33:52 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# include <string.h>

char	*ft_strcat(char *dest, char *src);
int		open_files(char **files);
int		ft_strlen(char *str);
int		read_files(int fd);

#endif