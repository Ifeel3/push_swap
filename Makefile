NAME	= push_swap

SRC		= push_swap.c \
		src/ft_parser.c \
		src/ft_newnumb.c \
		src/ft_clean.c \
		src/ft_swap.c \
		src/ft_push.c \
		src/ft_addback.c \
		src/ft_rotate.c \
		src/ft_revrotate.c \
		src/ft_checksort.c

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

HEAD	= push_swap.h

NORM	= norminette

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	$(CC) $(CFLAGS) $? libft/libft.a -I. -o $@

clean:
	make -C libft/ clean
	rm -f $(NAME) $(OBJ)

fclean: clean
	make -C libft/ fclean

re: fclean all

norm:
	make -C libft/ norm
	$(NORM) $(HEAD)
	$(NORM) -R CheckForbiddenSourceHeader $(SRC)

.PHONY: all $(NAME) re clean fclean norm
