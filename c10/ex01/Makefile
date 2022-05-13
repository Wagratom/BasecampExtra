# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bankai <bankai@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 11:00:08 by bankai            #+#    #+#              #
#    Updated: 2022/05/13 14:01:31 by bankai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_SOURCS	=	ft_cat.c

CC			= 	gcc
CFLAGS		+= 	-Wall -Wextra -Werror

NAME		=	cat

all: $(NAME)

$(NAME): $(C_SOURCS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

.PHONEY: clean fclean all