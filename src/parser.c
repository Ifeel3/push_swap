#include "../push_swap.h"

extern void	error(void);

static void	check_dup(t_stack **stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = *stack;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if (tmp1->num == tmp2->num)
				error();
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}

static void	convert_arg(char **tmp, t_stack **stack)
{
	int	i;
	int	res;
    char *str;

	i = 0;
	while (tmp[i])
	{
		res = ft_atoi((tmp)[i]);
        str = ft_itoa(res);
		if (ft_strncmp(str, tmp[i], ft_strlen(tmp[i])))
			error();
		ft_addnum(stack, res);
		free(tmp[i]);
        free(str);
		i++;
	}
}

void	parser(int argc, char **argv, t_stack **stack)
{
	char	**tmp;
	int		i;

	if (argc < 2)
	{
		ft_printf("Error: too few arguments...\n");
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
	check_dup(stack);
	ft_index(stack);
	ft_calcact(stack);
}
