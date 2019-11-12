/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:19:32 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/03 10:31:43 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		position2(int pos, int i)
{
	int moves;
	int num;
	int num2;

	moves = (i - 1) / 2;
	if (pos > moves + 1)
	{
		num = pos - moves;
		num2 = num - 3;
		moves = pos - (num + num2);
	}
	else
		moves = pos - 1;
	return (moves);
}

int		positioning(int pos, int i)
{
	int num;
	int num2;
	int moves;

	if (i % 2 != 0)
	{
		moves = (i - 1) / 2;
		if (pos > moves + 1)
		{
			num = pos - moves;
			num2 = num - 2;
			moves = pos - (num + num2);
		}
		else
			moves = pos - 1;
	}
	else
		moves = position2(pos, i);
	return (moves);
}

int		position_b(int *a, int sm, int a_b)
{
	int j;

	j = 0;
	while (j < a_b)
	{
		if (a[j] == sm)
			break ;
		j++;
	}
	return (j);
}

int		check_moves(int j, int *a, int a_b, int i)
{
	int arr_len;
	int sm;
	int eleme;
	int moves;
	int big[3];

	arr_len = i - a_b;
	eleme = j + (a_b - 1);
	sm = check_small(a, a_b, eleme);
	big[0] = biggest(a, i);
	big[1] = second_biggest(a, i);
	big[2] = third_biggest(a, i);
	if ((a[eleme] == big[0]) || (a[eleme] == big[1]) || (a[eleme] == big[2]))
		moves = 500;
	else
	{
		if (sm == a[eleme])
			moves = positioning(j, arr_len)
		+ positioning(position_b(a, biggest_in_b(a, a_b), a_b) + 1, a_b);
		else
			moves = positioning(j, arr_len)
		+ positioning(position_b(a, sm, a_b) + 1, a_b);
	}
	return (moves);
}

int		count_moves(int *a, int a_b, int i)
{
	int pos;
	int moves;
	int tmp_moves;
	int j;

	j = 1;
	moves = 500;
	while ((i - a_b) > j)
	{
		tmp_moves = check_moves(j, a, a_b, i);
		if (tmp_moves < moves)
		{
			moves = tmp_moves;
			pos = j + (a_b - 1);
		}
		j++;
	}
	return (pos);
}
