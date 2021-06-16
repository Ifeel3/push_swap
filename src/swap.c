#include "../push_swap.h"

static void	ft_swap(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	tmp->next = (*stack);
	(*stack) = tmp;
	ft_index(stack);
	ft_calcact(stack);
}

void	ft_sa(t_stack **a)
{
	if (!(*a)->next)
		return ;
	ft_swap(a);
	ft_printf("sa\n");
}

void	ft_sb(t_stack **b)
{
	if (!(*b)->next)
		return ;
	ft_swap(b);
	ft_printf("sb\n");
}

void	ft_ss(t_stack **a, t_stack **b)
{
	if (!(*a)->next && !(*b)->next)
		return ;
	else if (!(*a)->next && (*b)->next)
	{
		ft_swap(b);
		ft_printf("sb\n");
	}
	else if ((*a)->next && !(*b)->next)
	{
		ft_swap(a);
		ft_printf("sa\n");
	}
	else if ((*a)->next && (*b)->next)
	{
		ft_swap(a);
		ft_swap(b);
		ft_printf("ss\n");
	}
}
