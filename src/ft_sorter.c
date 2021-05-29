#include "../push_swap.h"

void	ft_sorter(t_stack **stack1, t_stack **stack2)
{
	int	i;

	i = ft_counter(stack1);
	if (i == 2)
		ft_sorttwo(stack1);
	else if (i == 3)
		ft_sortthree(stack1, stack2);
	else if (i == 4)
		ft_sortfour(stack1, stack2);
	else if (i == 5)
		ft_sortfive(stack1, stack2);
	else
		;
}
