#include "../push_swap.h"

static void	firstpos(t_stack **stack)
{
	ft_ra(stack);
	ft_sa(stack);
	ft_rra(stack);
}

static void	secondpos(t_stack **stack)
{
	if ((*stack)->num < (*stack)->next->next->num)
		ft_sa(stack);
	else
		ft_ra(stack);
}

static void	thirdpos(t_stack **stack)
{
	if ((*stack)->num > (*stack)->next->num)
		ft_sa(stack);
	ft_rra(stack);
}

void	ft_sortthree(t_stack **stack)
{
	if (((*stack)->num < (*stack)->next->num)
		&& (*stack)->num < (*stack)->next->next->num)
		firstpos(stack);
	else if (((*stack)->next->num < (*stack)->num)
		&& ((*stack)->next->num < (*stack)->next->next->num))
		secondpos(stack);
	else
		thirdpos(stack);
}

void	ft_smallsort(t_stack **a, t_stack **b)
{
	int	count;
	int	sorted;

	sorted = ft_checksort(a);
	count = ft_count(a);
	if (!sorted && count == 2)
		ft_sa(a);
	else if (!sorted && count == 3)
		ft_sortthree(a);
	else
		ft_sort_faf(a, b, count);
}
