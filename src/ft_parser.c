#include "../push_swap.h"

int	ft_parser(char **argv, t_stack **head, int size)
{
	int	i;

	i = 1;
	if (size == 1)
	{
		argv = ft_split(argv[1], ' ');
		i = 0;
	}
	while (argv[i])
	{
		ft_addback(head, ft_atoi(argv[i]));
		if (!head)
			return (0);
		i++;
	}
	return (1);
}
