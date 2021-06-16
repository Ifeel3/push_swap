#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_stack
{
	int				num;
	int				index;
	int				act;
	int				pos;
	struct s_stack	*next;
}					t_stack;

void	ft_addnum(t_stack **stack, int number);
void	parser(int argc, char **argv, t_stack **stack);
void	checkerror(char **argv);
int		ft_checksort(t_stack **stack);
void	ft_sorter(t_stack **a, t_stack **b);
int		ft_count(t_stack **stack);
void	ft_smallsort(t_stack **a, t_stack **b);
void	ft_bigsort(t_stack **a, t_stack **b);
void	ft_sort_faf(t_stack **a, t_stack **b, int count);
t_stack	*ft_findmin(t_stack **stack);
t_stack	*ft_findmax(t_stack **stack);
t_stack	*ft_findnextmin(t_stack **stack, int number);
t_stack	*ft_last(t_stack **stack);
void	divide(t_stack **a, t_stack **b, int step);
void	ft_sortthree(t_stack **stack);
void	ft_index(t_stack **stack);
void	ft_calcact(t_stack **stack);
void	ft_setpos(t_stack **stack);
void	ft_pa(t_stack **a, t_stack **b);
void	ft_pb(t_stack **a, t_stack **b);
void	ft_sa(t_stack **a);
void	ft_sb(t_stack **b);
void	ft_ss(t_stack **a, t_stack **b);
void	ft_ra(t_stack **a);
void	ft_rb(t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_rra(t_stack **a);
void	ft_rrb(t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);
#endif