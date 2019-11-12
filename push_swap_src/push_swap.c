/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:23:11 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/04 15:44:20 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		move_direction2(int *a, int a_b, int i, int pos)
{
	int sm;
	int j;
	int ans;
	int ans2;

	j = 0;
	sm = check_small(a, a_b, pos);
	while (sm != a[j])
		j++;
	ans = a_b - (j * 2);
	ans2 = (i - a_b) - ((pos - a_b) * 2);
	if (ans < 0 && ans2 < 0)
		a_b = rrr_function(pos, a, a_b, i);
	else if (ans >= 0 && ans2 >= 0)
		a_b = rr_function(pos, a, a_b, i);
	else if (ans >= 0 && ans2 < 0)
		a_b = rra_rb(pos, a, a_b, i);
	else if (ans < 0 && ans2 >= 0)
		a_b = ra_rrb(pos, a, a_b, i);
	return (a_b);
}

int		move_direction(int *a, int a_b, int i)
{
	int sm;
	int pos;

	pos = count_moves(a, a_b, i);
	sm = check_small(a, a_b, pos);
	if (sm == a[pos])
		a_b = pb_rb(a, a_b, i, sm);
	else
		a_b = move_direction2(a, a_b, i, pos);
	return (a_b);
}

int		condition_checker(int *a, int a_b, int i, int *big)
{
	if ((a[a_b] == big[0]) || (a[a_b] == big[1]) || (a[a_b] == big[2]))
	{
		ra(a, a_b, i);
		ft_putstr("ra\n");
	}
	else if (a_b <= 1)
	{
		a_b = pb(a, a_b, i);
		ft_putstr("pb\n");
		if (a_b == 2)
		{
			if (a[0] < a[1])
			{
				sb(a, a_b);
				ft_putstr("sb\n");
			}
		}
	}
	else
		a_b = move_direction(a, a_b, i);
	return (a_b);
}

int		program_loop(int *a, int a_b, int i, int *big)
{
	while (((check_sort(a, a_b, i) == 0) && (check_sort_a(a, a_b, i) == 0))
		|| ((check_sort_a(a, a_b, i) == 1) && (check_sort(a, a_b, i) == 0)))
	{
		a_b = condition_checker(a, a_b, i, big);
		if (i - a_b == 3)
			small_sort(a, a_b, i);
		if (i - a_b == 3)
			break ;
	}
	if (i - a_b == 3)
	{
		small_sort(a, a_b, i);
		while (a_b != 0)
			a_b = push_back(a, a_b, i);
	}
	return (a_b);
}

int		main(int argc, char **argv)
{
	int a_b;

	a_b = 0;
	if (check_all(argc, argv))
	{
		if (argc == 2)
			args_two(argv, a_b);
		else if (argc > 2)
			args_many(argc, argv);
	}
	return (0);
}
