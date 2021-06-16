#include "../push_swap.h"

static void	ft_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*count;

	tmp = (*stack);
	(*stack) = (*stack)->next;
	count = (*stack);
	while (count->next)
		count = count->next;
	count->next = tmp;
	tmp->next = NULL;
	ft_index(stack);
	ft_calcact(stack);
}

void	ft_ra(t_stack **a)
{
	if (!(*a)->next)
		return ;
	ft_rotate(a);
	ft_printf("ra\n");
}

void	ft_rb(t_stack **b)
{
	if (!(*b)->next)
		return ;
	ft_rotate(b);
	ft_printf("rb\n");
}

void	ft_rr(t_stack **a, t_stack **b)
{
	if (!(*a)->next && !(*b)->next)
		return ;
	else if (!(*a)->next && (*b)->next)
	{
		ft_rotate(b);
		ft_printf("rb\n");
	}
	else if ((*a)->next && !(*b)->next)
	{
		ft_rotate(a);
		ft_printf("ra\n");
	}
	else if ((*a)->next && (*b)->next)
	{
		ft_rotate(a);
		ft_rotate(b);
		ft_printf("rr\n");
	}
}
