#include "../push_swap.h"

void	ft_addnum(t_stack **stack, int number)
{
	t_stack	*new;
	t_stack	*tmp;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
	{
		ft_printf("Error: memory not allocated.");
		exit(0);
	}
	new->next = NULL;
	new->num = number;
	if (*stack == NULL)
		*stack = new;
	else
	{
		tmp = *stack;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
