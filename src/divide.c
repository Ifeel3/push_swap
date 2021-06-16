#include "../push_swap.h"

void	divide(t_stack **a, t_stack **b, int step)
{
	int	mid;
	int	count;

	mid = step;
	while (ft_count(a) != 3)
	{
		count = ft_count(a);
		while (count)
		{
			if ((*a)->pos < mid && (*a)->pos < ft_findmax(a)->pos - 2)
				ft_pb(a, b);
			else
				ft_ra(a);
			count--;
		}
		mid = mid + 25;
	}
	ft_sortthree(a);
}
