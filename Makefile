NAME	= push_swap
SRC		= $(wildcard src/*.c) \
		push_swap.c
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NORM	= norminette
OBJ		= $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	$(CC) $(CFLAGS) $? -Llibft -lft -I. -o $@

clean:
	make -C libft/ clean
	rm -f $(OBJ)

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)

re: fclean all

norm:
	make -C libft/ norm
	$(NORM) $(HEAD)
	$(NORM) -R CheckForbiddenSourceHeader $(SRC)

.PHONY: all $(NAME) re clean fclean norm
