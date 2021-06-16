#include "../push_swap.h"

static void	leftdivide(t_stack **a, t_stack **b)
{
	int		mid;
	int		count;

	count = ft_findmax(a)->pos - ft_findmin(a)->pos;
	mid = (count / 2) + ft_findmin(a)->pos;
	while (count)
	{
		if ((*a)->pos <= mid)
			ft_pb(a, b);
		else
			ft_ra(a);
		count--;
	}
	count = ft_count(a);
	while (count)
	{
		if ((*a)->pos < ft_findmax(a)->pos - 2)
			ft_pb(a, b);
		else
			ft_ra(a);
		count--;
	}
	ft_sortthree(a);
}

static void	rightdivide(t_stack **a, t_stack **b)
{
	int		mid;
	int		count;

	count = ft_findmax(b)->pos - ft_findmin(b)->pos + 1;
	mid = (count / 2);
	while (count)
	{
		if ((*b)->pos >= mid)
			ft_pa(a, b);
		else
			ft_rb(b);
		count--;
	}
	while (ft_count(a) != ft_count(b))
		ft_pb(a, b);
	leftdivide(a, b);
}

void	ft_firstsort(t_stack **a, t_stack **b)
{
	int	i;
	int	mid;

	mid = ft_count(a) / 2;
	i = ft_count(a);
	while (i)
	{
		if ((*a)->pos <= mid)
			ft_pb(a, b);
		else
			ft_ra(a);
		i--;
	}
	rightdivide(a, b);
}