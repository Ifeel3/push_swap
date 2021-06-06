NAME	= libft.a
FLAGS	= -Wall -Werror -Wextra
CFLAGS	= $(FLAGS) -I.
CC		= gcc
NORMIN	= norminette
SRCS	= $(wildcard *.c)
OBJS	= $(SRCS:%.c=%.o)

.PHONY: all clean fclean re norm bonus

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $?
	ranlib $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

norm:
	$(NORMIN) -R CheckForbiddenSourceHeader $(SRCS)
	$(NORMIN) $(HEADER)

re: fclean all
