void	ft_parser(int *stack, char **argv)
{
	int	i;
	int j;
	int tmp;
	int minus;

	i = 1;
	j = 0;
	while (argv[i])
	{
		tmp = 0;
		minus = 0;
		if (argv[i][j] == '-')
		{
			j++;
			minus = 1;
		}
		while (argv[i][j] >= 48 && argv[i][j] <= 57)
		{
			tmp = (tmp * 10) + (argv[i][j] - 48);
			j++;
		}
		if (minus == 1)
			tmp = -tmp;
		stack[i - 1] = tmp;
		j = 0;
		i++;
	}
}