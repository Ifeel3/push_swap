#include "../push_swap.h"

void	ft_push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;

	if (*src)
	{
		tmp = (*src);
		*src = (*src)->next;
		tmp->next = *dst;
		(*dst) = tmp;
	}
}
