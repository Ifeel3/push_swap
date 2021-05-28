#include "../push_swap.h"

int	ft_checksort(t_stack **stack)
{
	int		i;
	t_stack	*tmp;

	i = (*stack)->number;
	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->number < i)
			return (0);
		else
			i = tmp->number;
		tmp = tmp->next;
	}
	if (tmp->number < i)
		return (0);
	return (1);
}
