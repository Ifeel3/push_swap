#include "../push_swap.h"

void	ft_rotate(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*tmpcount;

	if ((*head)->next)
	{
		tmp = *head;
		*head = (*head)->next;
		tmp->next = NULL;
		tmpcount = *head;
		while (tmpcount->next)
			tmpcount = tmpcount->next;
		tmpcount->next = tmp;
	}
}
