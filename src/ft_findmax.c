#include "../push_swap.h"

t_stack	*ft_findmax(t_stack **stack)
{
	int		max;
	t_stack	*tmp;

	tmp = *stack;
	max = tmp->num;
	while (tmp)
	{
		if (max < tmp->num)
			max = tmp->num;
		tmp = tmp->next;
	}
	tmp = *stack;
	while (tmp)
	{
		if (max == tmp->num)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
