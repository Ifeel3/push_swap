#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	stack1[argc - 1];
	int	stack2[argc - 1];
	int	size1;
	int	size2;
	int i = 0;

	if (argc < 3)
	{
		write(1, "NOPE.. try again...", 19);
		return (0);
	}
	size1 = argc - 1;
	size2 = 0;
	ft_parser(stack1, argv);
	ft_null(stack2, argc - 1);
	while (i < (argc - 1))
	{
		if (i < size1)
			printf("| %d |   ", stack1[i]);
		else
			printf("| - |   ");
		if (i < size2)
			printf("| %d |\n", stack2[i]);
		else
			printf("| - |\n");
		i++;
	}
	return (0);
}
