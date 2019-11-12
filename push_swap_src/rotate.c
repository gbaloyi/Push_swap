/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:25:06 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/03 11:53:58 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(int *a, int a_b)
{
	int j;

	j = 0;
	if (a_b > 1)
	{
		while (j < a_b - 1)
		{
			ft_swap(&a[j], &a[j + 1]);
			j++;
		}
	}
}

void	ra(int *a, int a_b, int i)
{
	int j;

	j = a_b;
	if (!(a_b >= i))
	{
		while (j < i - 1)
		{
			ft_swap(&a[j], &a[j + 1]);
			j++;
		}
	}
}

void	rr(int *a, int a_b, int i)
{
	ra(a, a_b, i);
	rb(a, a_b);
}
