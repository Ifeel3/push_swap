#include "../push_swap.h"

void	ft_setindex(t_stack **stack)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	if (*stack)
	{
		tmp = *stack;
		while (tmp->next)
		{
			tmp->index = i;
			i++;
			tmp = tmp->next;
		}
		tmp->index = i;
	}
}