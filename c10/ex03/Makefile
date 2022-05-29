# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bankai <bankai@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/15 23:39:08 by bankai            #+#    #+#              #
#    Updated: 2022/05/22 02:29:22 by bankai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_SOURCS	=	ft_check_error.c creat_output.c print_output.c                \
                ./srcs/ft_strcmp.c ./srcs/ft_strjoin_mod.c ./srcs/ft_strlen.c \
                ./srcs/ft_strcpy.c ./srcs/ft_putstr.c ./srcs/ft_putchar.c     \
				./srcs/ft_display_file.c

OBJ			=	$(C_SOURCS:.c=.o)

H_SOURCS	=	ft_hexdump.h

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	library

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(H_SOURCS)
	ar -rcs $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) hexdump

re: fclean all

.PHOENIX: clean fclean all .c.o
