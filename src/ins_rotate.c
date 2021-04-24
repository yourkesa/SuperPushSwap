#include "push_swap.h"

void	ra_ins(t_general *g)
{
	size_t	len;
	size_t	i;
	size_t	a;
	char	*tmp;

	len = get_len_array(g->array);
	i = 0;
	a = 1;
	tmp = g->array[0];
	while (g->array[i])
	{
		g->array[i] = g->array[a];
		i++;
		a++;
	}
	g->array[i - 1] = tmp;
	g->ins_num += 1;
	printf("ra\n");
}

void	rb_ins(t_general *g)
{
	size_t	len;
	size_t	i;
	size_t	b;
	char	*tmp;

	len = get_len_array(g->stack_b);
	i = 0;
	b = 1;
	tmp = g->stack_b[0];
	while (g->stack_b[i])
	{
		g->stack_b[i] = g->stack_b[b];
		i++;
		b++;
	}
	g->stack_b[i - 1] = tmp;
	g->ins_num += 1;
	printf("rb\n");
}

void	rra_ins(t_general *g)
{
	size_t	len;
	char	*tmp;

	len = get_len_array(g->array);
	tmp = g->array[len - 1];
	while (--len)
		g->array[len] = g->array[len - 1];
	g->array[0] = tmp;
	g->ins_num += 1;
	printf("rra\n");
}

void	rrb_ins(t_general *g)
{
	size_t	len;
	char	*tmp;

	len = get_len_array(g->stack_b);
	if (len == 0)
	{
		print_array(g->stack_b, "rrb sigv");
	}
	tmp = g->stack_b[len - 1];
	while (--len)
		g->stack_b[len] = g->stack_b[len - 1];
	g->stack_b[0] = tmp;
	g->ins_num += 1;
	printf("rrb\n");
}
