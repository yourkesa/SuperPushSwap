#include "push_swap.h"

void	push_a(t_general *g)
{
	int	a;
	int	i;
	int	lol;

	main_lis(g);
	a = get_len_array(g->a);
	i = 0;
	while (i ^ a)
	{
		if (check_lises(g, g->a[0]) == 1)
			ra_ins(g);
		if (check_lises(g, g->a[0]) == 0)
			pb_ins(g);
		i++;
	}
}
