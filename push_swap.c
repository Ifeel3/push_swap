#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*stack1;
	t_stack *stack2;
	t_stack *tmp;

	stack2 = NULL;
	if (argc < 2)
	{
		write(1, "NOPE.. try again...", 19);
		return (0);
	}
	if (!ft_parser(argv, &stack1, argc - 1))
		return (0);
	tmp = stack1;
	while (tmp->next)
	{
		printf("| %d |\n", tmp->number);
		tmp = tmp->next;
	}
	printf("| %d |\n\n", tmp->number);
	if (ft_checksort(&stack1))
		printf("stack sorted");
	else
		printf("stack not sorted");
	return (0);
}
