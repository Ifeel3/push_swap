#include "../push_swap.h"

void	ft_sorttwo(t_stack **stack)
{
	if ((*stack)->number > (*stack)->next->number)
	{
		ft_swap(stack);
		write(1, "sa\n", 3);
	}
}

void	ft_sortthree(t_stack **stack1, t_stack **stack2)
{
	if ((*stack1)->next->number == ft_findmin(stack1))
	{
		ft_rotate(stack1);
		write(1, "ra\n", 3);
	}
	else if ((*stack1)->next->next->number == ft_findmin(stack1))
	{
		ft_revrotate(stack1);
		write(1, "rra\n", 4);
	}
	if (ft_checksort(stack1))
		return ;
	ft_push(stack2, stack1);
	write(1, "pb\n", 3);
	ft_sorttwo(stack1);
	ft_push(stack1, stack2);
	write(1, "pa\n", 3);
}

void	ft_sortfour(t_stack **stack1, t_stack **stack2)
{
	while ((*stack1)->number != ft_findmin(stack1))
	{
		if ((*stack1)->next->number == ft_findmin(stack1))
		{
			ft_rotate(stack1);
			write(1, "ra\n", 3);
		}
		else
		{
			ft_revrotate(stack1);
			write(1, "rra\n", 4);
		}
	}
	if (ft_checksort(stack1))
		return ;
	ft_push(stack2, stack1);
	write(1, "pb\n", 3);
	ft_sortthree(stack1, stack2);
	ft_push(stack1, stack2);
	write(1, "pa\n", 3);
}

void	ft_sortfive(t_stack **stack1, t_stack **stack2)
{
	while ((*stack1)->number != ft_findmin(stack1))
	{
		ft_revrotate(stack1);
		write(1, "rra\n", 4);
	}
	if (ft_checksort(stack1))
		return ;
	ft_push(stack2, stack1);
	write(1, "pb\n", 3);
	ft_sortfour(stack1, stack2);
	ft_push(stack1, stack2);
	write(1, "pa\n", 3);
}
