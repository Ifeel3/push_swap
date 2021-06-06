#include "../push_swap.h"

void	ft_push(t_stack **dst, t_stack **src, char com)
{
	t_stack	*tmp;

	if (*src)
	{
		tmp = (*src);
		*src = (*src)->next;
		tmp->next = *dst;
		(*dst) = tmp;
	}
	write(1, "p", 1);
	write(1, &com, 1);
	write(1, "\n", 1);
}
