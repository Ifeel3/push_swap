#include "../push_swap.h"

t_stack	*ft_findnextmin(t_stack **stack, int number)
{
	int		min;
	t_stack	*tmp;

	tmp = *stack;
	if (number == tmp->num)
		min = (*stack)->next->num;
	else
		min = (*stack)->num;
	while (tmp)
	{
		if (min > tmp->num && tmp->num != number)
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
