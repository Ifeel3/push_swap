#include "../push_swap.h"

t_stack	*ft_newnumb(int number)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new)
	{
		new->number = number;
		new->next = NULL;
		return (new);
	}
	return (NULL);
}
