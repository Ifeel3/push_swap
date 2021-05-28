#include "../push_swap.h"

void	ft_finddup(t_stack **stack)
{
	t_stack	*tmpnumb;
	t_stack	*tmpcount;

	tmpnumb = *stack;
	while (tmpnumb->next)
	{
		tmpcount = tmpnumb->next;
		while (tmpcount->next)
		{
			if (tmpnumb->number == tmpcount->number)
				ft_delonenumb(stack, &tmpcount);
			tmpcount = tmpcount->next;
		}
		if (tmpnumb->number == tmpcount->number)
			ft_delonenumb(stack, &tmpcount);
		if (tmpnumb->next)
			tmpnumb = tmpnumb->next;
	}
}
