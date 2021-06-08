#include "../push_swap.h"

static void	ft_setminpos(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next)
	{
		tmp->pos = -1;
		tmp = tmp->next;
	}
	tmp->pos = -1;
}

static void	ft_setposrec(t_stack **stack, int pos, int max)
{
	int		number;
	t_stack	*tmp;

	if (pos < max)
		ft_setposrec(stack, pos + 1, max);
	number = ft_findmax(stack)->number - 1;
	tmp = *stack;
	while (number != ft_findmin(stack)->number)
	{
		if (!tmp || !tmp->next && tmp->number != number)
		{
			number--;
			tmp = *stack;
		}
		if (number == tmp->number && tmp->pos == -1)
		{
			tmp->pos = pos;
			pos = -1;
			return ;
		}
		tmp = tmp->next;
	}
}

void	ft_setpos(t_stack **stack)
{
	ft_setminpos(stack);
	ft_findmin(stack)->pos = 0;
	ft_findmax(stack)->pos = ft_counter(stack) - 1;
	ft_setposrec(stack, 1, ft_counter(stack) - 2);
}