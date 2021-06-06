#include "../push_swap.h"

void	ft_swap(t_stack **head, char com)
{
	t_stack	*tmp;

	if ((*head)->next)
	{
		tmp = (*head)->next;
		(*head)->next = tmp->next;
		tmp->next = (*head);
		(*head) = tmp;
	}
	if (com == 'a')
		write(1, "sa\n", 3);
	else if (com == 'b')
		write(1, "sb\n", 3);
	else if (com == 'c')
		return ;
}

void	ft_swapswap(t_stack **stack1, t_stack **stack2)
{
	ft_swap(stack1, 'c');
	ft_swap(stack2, 'c');
	write(1, "ss\n", 3);
}
