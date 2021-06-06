#include "../push_swap.h"

void	ft_revrotate(t_stack **head, char com)
{
	t_stack	*tmp;
	t_stack	*tmpprev;

	if ((*head)->next)
	{
		tmpprev = NULL;
		tmp = *head;
		while (tmp->next)
		{
			tmpprev = tmp;
			tmp = tmp->next;
		}
		tmpprev->next = NULL;
		tmp->next = *head;
		*head = tmp;
	}
	if (com == 'a')
		write(1, "rra\n", 4);
	else if (com == 'b')
		write(1, "rrb\n", 4);
	else if (com == 'c')
		return ;
}

void	ft_revrotaterotate(t_stack **stack1, t_stack **stack2)
{
	ft_revrotate(stack1, 'c');
	ft_revrotate(stack2, 'c');
	write(1, "rrr\n", 4);
}
