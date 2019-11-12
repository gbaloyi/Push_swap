/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:20:16 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/04 15:42:04 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		pos_sm(int *a, int a_b, int element)
{
	int sm;
	int j;

	sm = check_small(a, a_b, element);
	j = 0;
	while (sm != a[j])
		j++;
	return (j);
}

int		rrr_function(int element, int *a, int a_b, int i)
{
	int j;

	j = pos_sm(a, a_b, element);
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

int		rr_function(int element, int *a, int a_b, int i)
{
	int j;

	j = pos_sm(a, a_b, element);
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

int		ra_rrb(int element, int *a, int a_b, int i)
{
	int j;

	j = pos_sm(a, a_b, element);
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

int		rra_rb(int element, int *a, int a_b, int i)
{
	int j;

	j = pos_sm(a, a_b, element);
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
