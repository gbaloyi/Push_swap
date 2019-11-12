/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 09:58:31 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/04 15:15:21 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(int *a, int a_b, int i)
{
	if (a_b != i - 1)
		ft_swap(&a[a_b], &a[a_b + 1]);
}

void	sb(int *a, int a_b)
{
	if (a_b > 1)
		ft_swap(&a[0], &a[1]);
}

void	ss(int *a, int a_b, int i)
{
	sa(a, a_b, i);
	sb(a, a_b);
}

int		pa(int *a, int a_b)
{
	if (a_b > 1)
		rb(a, a_b);
	if (a_b != 0)
		a_b += -1;
	return (a_b);
}

int		pb(int *a, int a_b, int i)
{
	if (a_b < i - 1)
	{
		a_b++;
		if (a_b > 1)
			rrb(a, a_b);
	}
	return (a_b);
}
