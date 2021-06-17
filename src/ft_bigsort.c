#include "../push_swap.h"

static t_stack	*findtarget(t_stack **stack)
{
	t_stack	*min;
	t_stack	*max;

	min = ft_findmin(stack);
	max = ft_findmax(stack);
	if (min->act + 1 < max->act)
		return (min);
	return (max);
}

static void	sorter(t_stack **a, t_stack **b)
{
	t_stack	*target;

	while (*b)
	{
		target = findtarget(b);
		if (target->index <= ft_last(b)->index / 2)
		{
			while (target->index != 1)
				ft_rb(b);
		}
		else
		{
			while (target->index != 1)
				ft_rrb(b);
		}
		if (ft_findmin(b)->pos == (*b)->pos)
		{
			ft_pa(a, b);
			ft_ra(a);
		}
		else
			ft_pa(a, b);
	}
}

void	ft_bigsort(t_stack **a, t_stack **b)
{
	ft_setpos(a);
	if (ft_count(a) > 100)
		divide(a, b, ft_count(a) / 15);
	else
		divide(a, b, ft_count(a) / 5);
	sorter(a, b);
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
