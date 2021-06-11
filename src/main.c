#include "../push_swap.h"

int	main(void)
{
	t_stack *a;
	t_stack *b;

	a = NULL;
	b = NULL;
	ft_addnum(&a, 10);
	ft_addnum(&a, 15);
	ft_addnum(&a, 20);
	ft_addnum(&a, 25);
	ft_addnum(&a, 30);
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_sa(&a);
	ft_sb(&b);
	ft_ss(&a, &b);
	ft_ra(&a);
	ft_rb(&b);
	ft_rr(&a, &b);
	ft_rra(&a);
	ft_rrb(&b);
	ft_rrr(&a, &b);
}