NAME	= push_swap
CC		= gcc
#CFLAGS	= -Wall -Werror -Wextra -I.
SRC		= $(wildcard src/*.c)
OBJ		= $(SRC:%.c=%.o)

.PHONY: all re clean fclean norm libft test

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
	make -C libft norm
	norminette -R CheckForbiddenSourceHeader $(SRC)
	norminette push_swap.h

test10: all
	python3 pyviz.py `ruby -e "puts (1..10).to_a.shuffle.join(' ')"`

test100: all
	python3 pyviz.py `ruby -e "puts (1..100).to_a.shuffle.join(' ')"`

test500: all
	python3 pyviz.py `ruby -e "puts (1..500).to_a.shuffle.join(' ')"`