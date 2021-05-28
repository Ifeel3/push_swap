#include "../push_swap.h"

void	ft_clean(t_stack **head)
{
	t_stack	*tmp;

	if (*head)
	{
		tmp = *head;
		while (tmp->next)
		{
			free(*head);
			*head = NULL;
			tmp = tmp->next;
			*head = tmp;
		}
		free(*head);
		*head = NULL;
	}
}
