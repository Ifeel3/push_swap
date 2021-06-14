#include "../push_swap.h"

extern void	error(void);

void	checkerror(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_strchr("0123456789- ", argv[i][j])
				|| (j > 0 && argv[i][j] == '-' && argv[i][j - 1] != ' ')
				|| (argv[i][j] == '-' && ft_isalpha(argv[i][j + 1])))
				error();
			j++;
		}
		i++;
	}
}
