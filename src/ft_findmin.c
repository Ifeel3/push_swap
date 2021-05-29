#include "../push_swap.h"

int	ft_findmin(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack;
	i = tmp->number;
	while (tmp->next)
	{
		if (i > tmp->number)
			i = tmp->number;
		tmp = tmp->next;
	}
	if (i > tmp->number)
		i = tmp->number;
	return (i);
}
