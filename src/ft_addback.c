#include "../push_swap.h"

t_stack	*ft_addback(t_stack **head, int number)
{
	t_stack	*new;
	t_stack	*tmp;

	new = ft_newnumb(number);
	if (*head)
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*head = new;
	ft_setindex(head);
	return (*head);
}
