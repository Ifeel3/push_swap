#include "../push_swap.h"

void	ft_index(t_stack **stack)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	tmp = *stack;
	while (tmp)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}
