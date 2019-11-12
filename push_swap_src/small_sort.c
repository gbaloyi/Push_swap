/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:26:27 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/04 15:37:07 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(int *a, int a_b, int i)
{
	if ((a[a_b] < a[a_b + 1]) && (a[a_b] < a[a_b + 2])
		&& (a[a_b + 1] > a[a_b + 2]))
		small_sort_two(a, a_b, i);
	else if ((a[a_b] > a[a_b + 1]) && (a[a_b] > a[a_b + 2])
		&& (a[a_b + 1] > a[a_b + 2]))
		small_sort_three(a, a_b, i);
	else if ((a[a_b] > a[a_b + 1]) && (a[a_b] > a[a_b + 2])
		&& (a[a_b + 1] < a[a_b + 2]))
	{
		ra(a, a_b, i);
		ft_putstr("ra\n");
	}
	else if ((a[a_b] > a[a_b + 1]) && (a[a_b] < a[a_b + 2])
		&& (a[a_b + 1] < a[a_b + 2]))
	{
		sa(a, a_b, i);
		ft_putstr("sa\n");
	}
	else if ((a[a_b] < a[a_b + 1]) && (a[a_b] > a[a_b + 2])
		&& (a[a_b + 1] > a[a_b + 2]))
	{
		rra(a, a_b, i);
		ft_putstr("rra\n");
	}
}

void	small_sort_two(int *a, int a_b, int i)
{
	rra(a, a_b, i);
	sa(a, a_b, i);
	ft_putstr("rra\n");
	ft_putstr("sa\n");
}

void	sort_two(int *a, int a_b, int i)
{
	if (a[a_b] > a[a_b + 1])
	{
		sa(a, a_b, i);
		ft_putstr("sa\n");
	}
}

void	small_sort_three(int *a, int a_b, int i)
{
	sa(a, a_b, i);
	rra(a, a_b, i);
	ft_putstr("sa\n");
	ft_putstr("rra\n");
}

int		check_small(int *a, int a_b, int element)
{
	int sm;
	int j;
	int n;

	j = 0;
	sm = a[j++];
	while (j < a_b)
	{
		if (sm > a[j])
			sm = a[j];
		j++;
	}
	j = 0;
	n = a[element];
	if (sm > n)
		return (n);
	while (j < a_b)
	{
		if ((sm < a[j]) && (a[j] < n))
			sm = a[j];
		j++;
	}
	return (sm);
}
