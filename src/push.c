#include "../push_swap.h"

static void	ft_push(t_stack **dest, t_stack **src)
{
	t_stack *tmp;

	tmp = (*src)->next;
	(*src)->next = (*dest);
	(*dest) = (*src);
	(*src) = tmp;
}

void	ft_pa(t_stack **a, t_stack **b)
{
	if (!*b)
		return ;
	ft_push(a, b);
	ft_printf("pa\n");
}

void	ft_pb(t_stack **a, t_stack **b)
{
	if (!*a)
		return ;
	ft_push(b, a);
	ft_printf("pb\n");
}