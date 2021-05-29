#include "../push_swap.h"

int	ft_finderr(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j])
			&& argv[i][j] != ' ' && argv[i][j] != '-' && argv[i][j] != '+')
				return (1);
			if ((argv[i][j] == '+' || argv[i][j] == '-')
			&& !ft_isdigit(argv[i][j + 1]))
				return (1);
			if ((argv[i][j] == '+' || argv[i][j] == '-')
			&& ft_isdigit(argv[i][j - 1]))
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
