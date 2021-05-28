NAME	= push_swap

SRC		= push_swap.c \
		src/ft_push.c \
		src/ft_revrotate.c \
		src/ft_rotate.c \
		src/ft_swap.c \
		src/ft_null.c \
		src/ft_parser.c

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

HEAD	= push_swap.h

NORM	= norminette

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

norm:
	$(NORM) $(HEAD)
	$(NORM) -R CheckForbiddenSourceHeader $(SRC)

test: re
	./$(NAME) -452 1234 -234 2345 -234

.PHONY: all $(NAME) re clean fclean norm test
