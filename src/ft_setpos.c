#include "../push_swap.h"

void	ft_setpos(t_stack **stack)
{
	t_stack	*tmp;
	int		i;
	int		pos;

	ft_findmin(stack)->pos = 1;
	pos = 2;
	i = ft_findmin(stack)->num;
	while (i <= ft_findmax(stack)->num)
	{
		tmp = *stack;
		while (tmp)
		{
			if (tmp->num == i && tmp->pos == 0)
			{
				tmp->pos = pos;
				pos++;
				break ;
			}
			tmp = tmp->next;
		}
		i++;
	}
}
