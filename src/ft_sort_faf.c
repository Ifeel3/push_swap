#include "../push_swap.h"

static void	ft_sort_four(t_stack **a, t_stack **b)
{
	t_stack	*min;

	min = ft_findmin(a);
	if (min->index < 3)
	{
		while (min->index != 1)
			ft_ra(a);
	}
	else
	{
		while (min->index != 1)
			ft_rra(a);
	}
	if (!ft_checksort(a))
	{
		ft_pb(a, b);
		ft_sortthree(a);
		if ((*b)->next && ((*b)->num < (*b)->next->num))
			ft_sb(b);
		ft_pa(a, b);
	}
}

static void	pushback(t_stack **a, t_stack **b)
{
	if ((*a)->num > (*b)->num)
		ft_pa(a, b);
	else
	{
		ft_ra(a);
		ft_pa(a, b);
		ft_rra(a);
	}
}

static void	ft_sort_five(t_stack **a, t_stack **b)
{
	t_stack	*min;
	t_stack	*next;

	min = ft_findmin(a);
	next = ft_findnextmin(a, min->num);
	if (min->act >= next->act)
		min = next;
	if (min->index < 4)
	{
		while (min->index != 1)
			ft_ra(a);
	}
	else
	{
		while (min->index != 1)
			ft_rra(a);
	}
	ft_pb(a, b);
	ft_sort_four(a, b);
	pushback(a, b);
}

void	ft_sort_faf(t_stack **a, t_stack **b, int count)
{
	if (count == 4)
		ft_sort_four(a, b);
	else
		ft_sort_five(a, b);
}
