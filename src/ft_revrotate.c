#include "../push_swap.h"

void	ft_revrotate(int *stack, int *size)
{
	int	tmp;
	int	i;

	tmp = stack[(*size) - 1];
	i = (*size);
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = tmp;
}

void	rra(int *stacka, int *sizea)
{
	if ((*sizea) > 0)
	{
		ft_revrotate(stacka, sizea);
		write(1, "rra\n", 4);
	}
}

void	rrb(int *stackb, int *sizeb)
{
	if ((*sizeb) > 0)
	{
		ft_revrotate(stackb, sizeb);
		write(1, "rrb\n", 4);
	}
}

void	rrr(int *stacka, int *sizea, int *stackb, int *sizeb)
{
	if ((*sizea) > 0 && (*sizeb) > 0)
	{
		ft_revrotate(stacka, sizea);
		ft_revrotate(stackb, sizeb);
		write(1, "rrr\n", 4);
	}
	else if ((*sizea) > 0 && (*sizeb) <= 0)
		rra(stacka, sizea);
	else if ((*sizea) <= 0 && (*sizeb) > 0)
		rrb(stackb, sizeb);
}