#include "../push_swap.h"

static void	rotb(t_stack **stack)
{
	t_stack	*min;
	t_stack	*max;

	min = ft_findmin(stack);
	max = ft_findmax(stack);
	if (min->act <= max->act)
	{
		while ((*stack)->pos != min->pos)
		{
			if (min->index <= ft_last(stack)->index / 2)
				ft_rb(stack);
			else
				ft_rrb(stack);
		}
	}
	else
	{
		if (max->index <= ft_last(stack)->index / 2)
			ft_rb(stack);
		else
			ft_rrb(stack);
	}
}

void	ft_bigsort(t_stack **a, t_stack **b)
{
	t_stack *target;

	ft_setpos(a);
	ft_firstsort(a, b);
	while (*b)
	{
		rotb(b);
		while ((*b)->num < (*a)->num && ft_last(a) != ft_findmax(a))
			ft_rra(a);
		while ((*b)->num > (*a)->num)
			ft_ra(a);
		ft_pa(a, b);
	}
	if (ft_findmin(a)->index <= ft_last(a)->index / 2)
	{
		while ((*a)->pos != 1)
			ft_ra(a);
	}
	else
	{
		while ((*a)->pos != 1)
			ft_rra(a);
	}
}
