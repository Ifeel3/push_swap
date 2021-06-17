NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -I.
SRC		= src/checkerror.c \
		src/divide.c \
		src/error.c \
		src/ft_addnum.c \
		src/ft_bigsort.c \
		src/ft_calcact.c \
		src/ft_checksort.c \
		src/ft_count.c \
		src/ft_findmax.c \
		src/ft_findmin.c \
		src/ft_findnextmin.c \
		src/ft_index.c \
		src/ft_last.c \
		src/ft_setpos.c \
		src/ft_sort_faf.c \
		src/main.c \
		src/parser.c \
		src/push.c \
		src/revrotate.c \
		src/rotate.c \
		src/smallsorters.c \
		src/swap.c
OBJ		= $(SRC:%.c=%.o)

.o: .c
	$(CC) $(CFLAGS) $< -o $@

.PHONY: all re clean fclean norm libft

all: libft $(NAME)

$(NAME): $(OBJ) push_swap.h
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