#include "../push_swap.h"

void	ft_swap(int *stack)
{
	int tmp;

	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
}

void	sa(int *stack, int *size)
{
	if ((*size) > 1)
	{
		ft_swap(stack);
		write(1, "sa\n", 3);
	}
}

void	sb(int *stack, int *size)
{
	if ((*size) > 1)
	{
		ft_swap(stack);
		write(1, "sb\n", 3);
	}
}

void	ss(int *stacka, int *sizea, int *stackb, int *sizeb)
{
	if ((*sizea) > 1 && (*sizeb) > 1)
	{
		ft_swap(stacka);
		ft_swap(stackb);
		write(1, "ss\n", 3);
	}
	else if ((*sizea) > 1 && (*sizeb) <= 1)
		sa(stacka, sizea);
	else if ((*sizea) <= 1 && (*sizeb) > 1)
		sb(stackb, sizeb);
}
