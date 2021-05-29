#include "../push_swap.h"

int	ft_parser(char **argv, t_stack **head, int size)
{
	int		i;
	int		j;
	char	**tmp;

	i = 1;
	if (size == 1)
	{
		argv = ft_split(argv[1], ' ');
		i = 0;
	}
	while (argv[i])
	{
		j = 0;
		tmp = ft_split(argv[i], ' ');
		while (tmp[j])
		{
			ft_addback(head, ft_atoi(tmp[j]));
			j++;
		}
		i++;
		ft_cleanarray(tmp);
	}
	return (1);
}
