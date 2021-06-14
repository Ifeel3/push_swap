NAME	= push_swap
CC		= gcc
#CFLAGS	= -Wall -Werror -Wextra -I.
SRC		= $(wildcard src/*.c)
OBJ		= $(SRC:%.c=%.o)

.PHONY: all re clean fclean norm libft

all: libft $(NAME)

$(NAME): $(OBJ)
ifndef ($?)
	$(CC) $(OBJ) -Llibft -lft -o $@
endif

libft:
	make -C libft

clean:
	make -C libft clean
	rm -f $(OBJ)

fclean: clean
	rm -f libft/libft.a
	rm -f $(NAME)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader $(SRC)
	norminette push_swap.h
