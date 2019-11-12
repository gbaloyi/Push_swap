/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_three.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:02:52 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/03 10:32:26 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		biggest(int *a, int i)
{
	int big;
	int j;

	big = a[0];
	j = 1;
	while (j < i)
	{
		if (big < a[j])
			big = a[j];
		j++;
	}
	return (big);
}

int		second_biggest(int *a, int i)
{
	int big;
	int j;
	int s_big;

	big = biggest(a, i);
	j = 0;
	if (big == a[0])
		s_big = a[j];
	else
		s_big = a[0];
	while (j < i)
	{
		if ((s_big < a[j]) && !(a[j] == big))
			s_big = a[j];
		j++;
	}
	return (s_big);
}

int		third_biggest(int *a, int i)
{
	int j;
	int t_big;
	int s_big;
	int big;

	j = 0;
	big = biggest(a, i);
	s_big = second_biggest(a, i);
	if ((big == a[0] && s_big == a[1]) || (big == a[1] && s_big == a[0]))
		t_big = a[2];
	else if ((big == a[0] && s_big != a[1]) || (big != a[1] && s_big == a[0]))
		t_big = a[1];
	else if ((big != a[0] && s_big == a[1]) || (big == a[1] && s_big != a[0]))
		t_big = a[0];
	j = 0;
	while (j < i)
	{
		if (t_big < a[j] && a[j] != big && a[j] != s_big)
			t_big = a[j];
		j++;
	}
	return (t_big);
}
