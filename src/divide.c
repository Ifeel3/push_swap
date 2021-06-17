#include "../push_swap.h"

static t_stack	*findtarget(t_stack **stack, int maxnum)
{
	t_stack	*tmp;
	t_stack	*target;

	tmp = *stack;
	target = NULL;
	while (tmp)
	{
		if (tmp->pos <= maxnum)
			target = tmp;
		tmp = tmp->next;
	}
	tmp = *stack;
	while (tmp)
	{
		if (tmp->pos <= maxnum)
			break ;
		tmp = tmp->next;
	}
	if (!tmp && !target)
		return (NULL);
	if (tmp && tmp->act < target->act)
		target = tmp;
	return (target);
}

void	divide(t_stack **a, t_stack **b, int step)
{
	t_stack	*target;
	int		maxnum;

	maxnum = step;
	while (*a)
	{
		target = findtarget(a, maxnum);
		if (!target)
			maxnum += step;
		if (target && target->index < (ft_last(a)->index / 2))
		{
			while (target->index != 1)
				ft_ra(a);
			ft_pb(a, b);
		}
		else if (target)
		{
			while (target->index != 1)
				ft_rra(a);
			ft_pb(a, b);
		}
	}
}
