#include "../push_swap.h"

void	ft_rotate(t_stack **head, char com)
{
	t_stack	*tmp;
	t_stack	*tmpcount;

	if ((*head)->next)
	{
		tmp = *head;
		*head = (*head)->next;
		tmp->next = NULL;
		tmpcount = *head;
		while (tmpcount->next)
			tmpcount = tmpcount->next;
		tmpcount->next = tmp;
	}
	if (com == 'a')
		write(1, "ra\n", 3);
	else if (com == 'b')
		write(1, "rb\n", 3);
	else if (com == 'c')
		return ;
}

void	ft_rotaterotate(t_stack **stack1, t_stack **stack2)
{
	ft_rotate(stack1, 'c');
	ft_rotate(stack2, 'c');
	write(1, "rr\n", 3);
}
