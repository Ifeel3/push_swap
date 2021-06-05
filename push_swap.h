#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				number;
	struct s_stack	*next;
}	t_stack;

int		ft_parser(char **argv, t_stack **head, int size);
t_stack	*ft_newnumb(int number);
t_stack	*ft_addback(t_stack **head, int number);
void	ft_clean(t_stack **head);
void	ft_swap(t_stack **head);
void	ft_push(t_stack **dst, t_stack **src);
void	ft_rotate(t_stack **head);
void	ft_revrotate(t_stack **head);
int		ft_checksort(t_stack **stack);
void	ft_delonenumb(t_stack **stack, t_stack **number);
int		ft_finddup(t_stack **stack);
int		ft_finderr(char **argv);
void	ft_cleanarray(char **array);
int		ft_counter(t_stack **stack);
void	ft_sorttwo(t_stack **stack);
void	ft_sortthree(t_stack **stack1, t_stack **stack2);
void	ft_sortfour(t_stack **stack1, t_stack **stack2);
void	ft_sortfive(t_stack **stack1, t_stack **stack2);
void	ft_sorter(t_stack **stack1, t_stack **stack2);
int		ft_findmin(t_stack **stack);
int		ft_findmax(t_stack **stack);
#endif