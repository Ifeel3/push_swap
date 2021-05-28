#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>

void	ft_parser(int *stack, char **argv);
void	ft_null(int *stack, int size);
void	ft_swap(int *stack);
void	ft_rotate(int *stack, int *size);
void	ft_revrotate(int *stack, int *size);
void	ft_push(int *dest, int *sized, int *src, int *sizes);
void	sa(int *stack, int *size);
void	sb(int *stack, int *size);
void	ss(int *stacka, int *sizea, int *stackb, int *sizeb);
void	pa(int *stacka, int *sizea, int *stackb, int *sizeb);
void	pb(int *stacka, int *sizea, int *stackb, int *sizeb);
void	ra(int *stacka, int *sizea);
void	rb(int *stackb, int *sizeb);
void	rr(int *stacka, int *sizea, int *stackb, int *sizeb);
void	rra(int *stacka, int *sizea);
void	rrb(int *stackb, int *sizeb);
void	rrr(int *stacka, int *sizea, int *stackb, int *sizeb);
#endif