#include "../push_swap.h"

void	ft_swap(t_stack **head)
{
	t_stack	*tmp;

	if ((*head)->next)
	{
		tmp = (*head)->next;
		(*head)->next = tmp->next;
		tmp->next = (*head);
		(*head) = tmp;
	}
}
