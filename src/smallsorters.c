#include "../push_swap.h"

void	ft_sorttwo(t_stack **stack)
{
	if ((*stack)->number > (*stack)->next->number)
	{
		ft_swap(stack, 'a');
		write(1, "sa\n", 3);
	}
}

void	ft_sortthree(t_stack **stack)
{
	if ((*stack)->number == ft_findmin(stack)->number && !ft_checksort(stack))
	{
		ft_rotate(stack, 'a');
		ft_swap(stack, 'a');
		ft_revrotate(stack, 'a');
	}
	else if ((*stack)->next->number == ft_findmin(stack)->number)
	{
		if ((*stack)->number < (*stack)->next->next->number)
			ft_swap(stack, 'a');
		else
			ft_rotate(stack, 'a');
	}
	else
	{
		if ((*stack)->number < (*stack)->next->number)
			ft_revrotate(stack, 'a');
		else
		{
			ft_swap(stack, 'a');
			ft_revrotate(stack, 'a');
		}
	}
}

void	ft_sortfour(t_stack **stack1, t_stack **stack2)
{
	t_stack *min;

	min = ft_findmin(stack1);
	if ((*stack1)->next->number == min->number)
		ft_rotate(stack1, 'a');
	else if ((*stack1)->next->next->number == min->number)
	{
		ft_rotate(stack1, 'a');
		ft_rotate(stack1, 'a');
	}
	else if ((*stack1)->number != min->number)
	{
		ft_revrotate(stack1, 'a');
	}
	if ((*stack1)->number == min->number && !ft_checksort(stack1))
	{
		ft_push(stack2, stack1, 'b');
		ft_sortthree(stack1);
		ft_push(stack1, stack2, 'a');
	}
}

void	ft_sortfive(t_stack **stack1, t_stack **stack2)
{
	t_stack	*max;

	max = ft_findmax(stack1);
	if ((*stack1)->next->next->next->next->number == max->number)
		ft_revrotate(stack1, 'a');
	else if ((*stack1)->next->next->next->number == max->number)
	{
		ft_revrotate(stack1, 'a');
		ft_revrotate(stack1, 'a');
	}
	else
	{
		while ((*stack1)->number != max->number)
			ft_rotate(stack1, 'a');
	}
	ft_push(stack2, stack1, 'b');
	ft_sortfour(stack1, stack2);
	ft_push(stack1, stack2, 'a');
	ft_rotate(stack1, 'a');
}
