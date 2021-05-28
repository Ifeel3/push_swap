#include "../push_swap.h"

void	ft_rotate(int *stack, int *size)
{
	int	tmp;
	int	i;

	tmp = stack[0];
	i = 0;
	while (i < (*size) - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[(*size) - 1] = tmp;
}

void	ra(int *stacka, int *sizea)
{
	if ((*sizea) > 0)
	{
		ft_rotate(stacka, sizea);
		write(1, "ra\n", 3);
	}
}

void	rb(int *stackb, int *sizeb)
{
	if ((*sizeb) > 0)
	{
		ft_rotate(stackb, sizeb);
		write(1, "rb\n", 3);
	}
}

void	rr(int *stacka, int *sizea, int *stackb, int *sizeb)
{
	if ((*sizea) > 0 && (*sizeb) > 0)
	{
		ft_rotate(stacka, sizea);
		ft_rotate(stackb, sizeb);
		write(1, "rr\n", 3);
	}
	else if ((*sizea) > 0 && (*sizeb) <= 0)
		ra(stacka, sizea);
	else if ((*sizea) <= 0 && (*sizeb) > 0)
		rb(stackb, sizeb);
}