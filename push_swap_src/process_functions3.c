/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_functions3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:21:49 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/04 15:40:01 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		pos_big(int *a, int a_b)
{
	int big;
	int j;

	big = biggest(a, a_b);
	j = 0;
	while (big != a[j])
		j++;
	return (j);
}

int		rrr_function2(int element, int *a, int a_b, int i)
{
	int j;

	j = pos_big(a, a_b);
	while (element < i && j < a_b)
	{
		rrr(a, a_b, i);
		ft_putstr("rrr\n");
		element++;
		j++;
	}
	while (element < i)
	{
		rra(a, a_b, i);
		ft_putstr("rra\n");
		element++;
	}
	while (j < a_b)
	{
		rrb(a, a_b);
		ft_putstr("rrb\n");
		j++;
	}
	a_b = pb(a, a_b, i);
	ft_putstr("pb\n");
	return (a_b);
}

int		rr_function2(int element, int *a, int a_b, int i)
{
	int j;

	j = pos_big(a, a_b);
	while (element > a_b && j > 0)
	{
		rr(a, a_b, i);
		ft_putstr("rr\n");
		element--;
		j--;
	}
	while (element > a_b)
	{
		ra(a, a_b, i);
		ft_putstr("ra\n");
		element--;
	}
	while (j > 0)
	{
		rb(a, a_b);
		ft_putstr("rb\n");
		j--;
	}
	a_b = pb(a, a_b, i);
	ft_putstr("pb\n");
	return (a_b);
}

int		ra_rrb2(int element, int *a, int a_b, int i)
{
	int j;

	j = pos_big(a, a_b);
	while (element > a_b)
	{
		ra(a, a_b, i);
		ft_putstr("ra\n");
		element--;
	}
	while (j < a_b)
	{
		rrb(a, a_b);
		ft_putstr("rrb\n");
		j++;
	}
	a_b = pb(a, a_b, i);
	ft_putstr("pb\n");
	return (a_b);
}

int		rra_rb2(int element, int *a, int a_b, int i)
{
	int j;

	j = pos_big(a, a_b);
	while (element < i)
	{
		rra(a, a_b, i);
		ft_putstr("rra\n");
		element++;
	}
	while (j > 0)
	{
		rb(a, a_b);
		ft_putstr("rb\n");
		j--;
	}
	a_b = pb(a, a_b, i);
	ft_putstr("pb\n");
	return (a_b);
}
