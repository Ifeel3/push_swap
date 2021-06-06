#include "../push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*stack1;
	t_stack	*stack2;

	stack2 = NULL;
	if (argc < 2 || ft_finderr(argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!ft_parser(argv, &stack1, argc - 1) || !stack1 || !(stack1->next))
		return (0);
	if (ft_finddup(&stack1))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!ft_checksort(&stack1))
		ft_sorter(&stack1, &stack2);
	pause();
	return (0);
}
