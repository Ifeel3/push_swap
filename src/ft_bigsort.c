#include "../push_swap.h"

static void	alltob(t_stack **a, t_stack **b)
{
	int		count;
	int		i;

	count = ft_count(a);
	i = count - 1;
	while (i)
	{
		if ((*a)->pos < count - 2)
			ft_pb(a, b);
		else
			ft_ra(a);
		i--;
	}
	if ((*a)->pos < count - 2)
		ft_pb(a, b);
}

void	ft_bigsort(t_stack **a, t_stack **b)
{
	ft_setpos(a);
	alltob(a, b);
	if (!ft_checksort(a))
		ft_sortthree(a);
}
