/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:22:32 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/03 10:29:34 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_back(int *a, int a_b, int i)
{
	int big;
	int pos;
	int ans;

	big = biggest(a, a_b);
	pos = position_b(a, big, a_b);
	ans = (i - a_b) - ((pos - a_b) * 2);
	if (ans >= 0)
	{
		while (a[0] != big)
		{
			rb(a, a_b);
			ft_putstr("rb\n");
		}
	}
	else
	{
		while (a[0] != big)
		{
			rrb(a, a_b);
			ft_putstr("rrb\n");
		}
	}
	a_b = push_back2(a, a_b, i);
	return (a_b);
}

int		push_back2(int *a, int a_b, int i)
{
	while (a_b > 0)
	{
		if (a[0] < a[a_b])
		{
			if (a[i - 1] < a[a_b] && a[i - 1] > a[0])
			{
				rra(a, a_b, i);
				ft_putstr("rra\n");
			}
			else
			{
				a_b = pa(a, a_b);
				ft_putstr("pa\n");
			}
		}
		else if (a[0] > a[a_b])
		{
			ra(a, a_b, i);
			ft_putstr("ra\n");
		}
	}
	if (check_sort(a, a_b, i) == 0)
		push_back3(a, a_b, i);
	return (a_b);
}

void	push_back3(int *a, int a_b, int i)
{
	rra(a, a_b, i);
	ft_putstr("rra\n");
}
