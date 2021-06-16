#include "../push_swap.h"

void	ft_calcact(t_stack **stack)
{
	int		mid;
	int		count;
	t_stack	*tmp;

	count = ft_count(stack);
	mid = (count / 2) + 1;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->index <= mid)
			tmp->act = tmp->index - 1;
		else
			tmp->act = count - tmp->index + 1;
		tmp = tmp->next;
	}
}
