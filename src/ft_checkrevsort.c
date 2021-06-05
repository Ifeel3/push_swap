#include "../push_swap.h"

int	ft_checkrevsort(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->number < tmp->next->number)
			return (0);
		else
			tmp = tmp->next;
	}
	return (1);
}