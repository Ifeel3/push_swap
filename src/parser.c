#include "../push_swap.h"

extern void	error(void);

static void	convert_arg(char **tmp, t_stack **stack)
{
	int	i;
	int	res;

	i = 0;
	while (tmp[i])
	{
		res = ft_atoi(tmp[i]);
		if (res == 0 && tmp[i][0] != '0')
			error();
		ft_addnum(stack, res);
		i++;
	}
}

void	parser(int argc, char **argv, t_stack **stack)
{
	char	**tmp;
	int		i;

	if (argc < 2)
	{
		ft_printf("Error: too few arguments...");
		exit(0);
	}
	checkerror(argv);
	i = 1;
	while (argv[i])
	{
		tmp = ft_split(argv[i], ' ');
		convert_arg(tmp, stack);
		free(tmp);
		i++;
	}
}
