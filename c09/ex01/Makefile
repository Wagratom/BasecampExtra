C_SORCS =	./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c \
            ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

H_SOURS =	./includes/ft.h
OBJ		=	$(C_SORCS:.c=.o)

CC		=	gcc
CFLAGS +=	-Wall -Wextra -Werror 

NAME 	= 	libft.a

all: $(NAME)
	
$(NAME): $(OBJ) $(H_SOURS)
	ar -rcs $@ $^

.o:	%.c
	$(CC) -c *.c -o $@

clean:
	rm -f ./srcs/*.o

fclean: clean
	rm -f $(NAME);

re:	fclean all

.PHONEY: all, clean fclean re