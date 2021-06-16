#include "../push_swap.h"

void	ft_sorter(t_stack **a, t_stack **b)
{
	if (ft_count(a) < 6)
		ft_smallsort(a, b);
	else
		ft_bigsort(a, b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	parser(argc, argv, &a);
	if (ft_checksort(&a))
		return (0);
	ft_sorter(&a, &b);
}
