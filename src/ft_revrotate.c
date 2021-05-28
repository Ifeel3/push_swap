#include "../push_swap.h"

void	ft_revrotate(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*tmpprev;

	if ((*head)->next)
	{
		tmpprev = NULL;
		tmp = *head;
		while (tmp->next)
		{
			tmpprev = tmp;
			tmp = tmp->next;
		}
		tmpprev->next = NULL;
		tmp->next = *head;
		*head = tmp;
	}
}
