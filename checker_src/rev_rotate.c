/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 09:57:59 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/03 11:14:06 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(int *a, int a_b, int i)
{
	int j;

	j = i - 1;
	if (j > 0)
	{
		while (j > a_b)
		{
			ft_swap(&a[j], &a[j - 1]);
			j--;
		}
	}
}

void	rrb(int *a, int a_b)
{
	int j;

	j = a_b - 1;
	while (j > 0)
	{
		ft_swap(&a[j], &a[j - 1]);
		j--;
	}
}

void	rrr(int *a, int a_b, int i)
{
	rra(a, a_b, i);
	rrb(a, a_b);
}
