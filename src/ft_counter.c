#include "../push_swap.h"

int	ft_counter(t_stack **stack)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	tmp = *stack;
	while (tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
