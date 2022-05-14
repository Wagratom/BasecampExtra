C_SOURCS	=	ft_display_file.c ft_strcmp.c ft_strjoin_mod.c \
                ft_strlen.c

H_SOURCS	=	ft_tail.h

OBJ			=	$(C_SOURCS:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

NAME		= library

.o: %.c
	$(CC) -c -o $@

all: $(NAME)

$(NAME): $(OBJ) $(H_SOURCS)
	ar -rcs $@ $^
	$(CC) $(CFLAGS) main.c $@ -o tail

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) tail



