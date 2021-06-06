#include "../push_swap.h"

t_stack	*ft_findmax(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack;
	i = tmp->number;
	while (tmp->next)
	{
		if (i < tmp->number)
			i = tmp->number;
		tmp = tmp->next;
	}
	if (i < tmp->number)
		i = tmp->number;
	tmp = *stack;
	while (i != tmp->number)
		tmp = tmp->next;
	return (tmp);
}
