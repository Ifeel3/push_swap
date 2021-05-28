#include "../push_swap.h"

void	ft_delonenumb(t_stack **stack, t_stack **number)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next != *number)
		tmp = tmp->next;
	tmp->next = (*number)->next;
	free(*number);
}
