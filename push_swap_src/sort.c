/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:27:32 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/03 11:51:58 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		biggest_in_b(int *a, int a_b)
{
	int big;
	int j;

	big = a[0];
	j = 1;
	while (j < a_b)
	{
		if (big < a[j])
			big = a[j];
		j++;
	}
	return (big);
}

int		check_sort(int *a, int a_b, int i)
{
	int j;

	j = 0;
	if (a_b != 0)
		return (0);
	while (j < i - 1)
	{
		if (a[j] > a[j + 1])
			return (0);
		j++;
	}
	return (1);
}

int		check_sort_a(int *a, int a_b, int i)
{
	int j;
	int big_b;

	j = a_b;
	big_b = biggest_in_b(a, a_b);
	if (a_b != 0)
	{
		while (j < i)
		{
			if (a[j] > a[j + 1])
				return (0);
			j++;
		}
		if (a[a_b] < big_b)
			return (0);
	}
	return (1);
}
