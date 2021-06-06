NAME	= push_swap
SRC		= $(wildcard src/*.c)
CC		= gcc
#CFLAGS	= -Wall -Werror -Wextra
NORM	= norminette
OBJ		= $(SRC:%.c=%.o)

all: libft $(NAME)

libft:
	make -C libft/ all

$(NAME): $(OBJ)
ifndef ($?)
	$(CC) -Llibft -lft $(OBJ) -o $@
endif

clean:
	make -C libft/ clean
	rm -f $(OBJ)

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)

re: fclean all

norm:
	make -C libft/ norm
	$(NORM) push_swap.h
	$(NORM) -R CheckForbiddenSourceHeader $(SRC)

.PHONY: all re clean fclean norm libft
