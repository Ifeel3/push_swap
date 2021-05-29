#include "../push_swap.h"

int	ft_finddup(t_stack **stack)
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
				return (1);
			tmpcount = tmpcount->next;
		}
		if (tmpnumb->number == tmpcount->number)
			return (1);
		if (tmpnumb->next)
			tmpnumb = tmpnumb->next;
	}
	return (0);
}
