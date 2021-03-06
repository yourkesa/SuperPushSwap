#include "push_swap.h"

int	maybe_swap_a(char **array)
{
	if (array[0] < array[1])
		return (1);
	if (ft_atoi(array[0]) < ft_atoi(array[1]))
		return (1);
	return (0);
}

int	maybe_swap_b(char **array)
{
	if (array[0] > array[1])
		return (1);
	if (ft_atoi(array[0]) < ft_atoi(array[1]))
		return (1);
	return (0);
}

int	push_b_with_rotate(t_general *g, char **array, int rotate)
{
	if (rotate == 1 && maybe_swap_b(array) == 1)
	{
		sa_ins(g);
		pb_ins(g);
		return (0);
	}
	if (rotate > 0)
	{
		while (rotate--)
			ra_ins(g);
	}
	else if (rotate < 0)
	{
		while (rotate++ != 0)
			rra_ins(g);
	}
	pb_ins(g);
	return (rotate);
}

int	get_min_way(char **array, size_t pos_elem)
{
	size_t	len;
	int		rotate;

	rotate = 0;
	len = get_len_array(array);
	if (len == 1)
		return (0);
	if ((len / 2) < pos_elem)
		return ((len - pos_elem) * -1);
	else if ((len / 2) >= pos_elem)
		return (pos_elem);
	return (rotate);
}
