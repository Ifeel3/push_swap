#include "../push_swap.h"

void	ft_push(int *dest, int *sized, int *src, int *sizes)
{
	ft_revrotate(dest, sized);
	dest[0] = src[0];
	ft_rotate(src, sizes);
	(*sized)++;
	(*sizes)--;
}

void	pa(int *stacka, int *sizea, int *stackb, int *sizeb)
{
	if ((*sizeb) >= 1)
	{
		ft_push(stacka, sizea, stackb, sizeb);
		write(1, "pa\n", 3);
	}
}

void	pb(int *stacka, int *sizea, int *stackb, int *sizeb)
{
	if ((*sizea) >= 1)
	{
		ft_push(stackb, sizeb, stacka, sizea);
		write(1, "pb\n", 3);
	}
}