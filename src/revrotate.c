#include "../push_swap.h"

static void	ft_revrotate(t_stack **stack)
{
	t_stack *tmp;
	t_stack *count;

	count = (*stack);
	while (count->next->next)
		count = count->next;
	tmp = count->next;
	count->next = NULL;
	tmp->next = (*stack);
	(*stack) = tmp;
}

void	ft_rra(t_stack **a)
{
	if (!(*a)->next)
		return ;
	ft_revrotate(a);
	ft_printf("rra\n");
}

void	ft_rrb(t_stack **b)
{
	if (!(*b)->next)
		return ;
	ft_revrotate(b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	if (!(*a)->next && !(*b)->next)
		return ;
	else if (!(*a)->next && (*b)->next)
	{
		ft_revrotate(b);
		ft_printf("rrb\n");
	}
	else if ((*a)->next && !(*b)->next)
	{
		ft_revrotate(a);
		ft_printf("rra\n");
	}
	else if ((*a)->next && (*b)->next)
	{
		ft_revrotate(a);
		ft_revrotate(b);
		ft_printf("rrr\n");
	}
}