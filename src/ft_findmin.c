#include "../push_swap.h"

t_stack	*ft_findmin(t_stack **stack)
{
	int		min;
	t_stack	*tmp;

	tmp = *stack;
	min = tmp->num;
	while (tmp)
	{
		if (min > tmp->num)
			min = tmp->num;
		tmp = tmp->next;
	}
	tmp = *stack;
	while (tmp)
	{
		if (min == tmp->num)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
