# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bankai <bankai@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 14:51:03 by bankai            #+#    #+#              #
#    Updated: 2022/05/13 13:14:33 by bankai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_SORCS = ft_display_file.c

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

NAME = ft_display_file


all: $(NAME);

$(NAME): $(C_SORCS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

.PHONEY: all clean fclean
