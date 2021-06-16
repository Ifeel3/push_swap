#include "../push_swap.h"

int	ft_checksort(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->next && tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
