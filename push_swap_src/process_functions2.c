/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_functions2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:20:52 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/03 10:21:00 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		pb_rb(int *a, int a_b, int i, int sm)
{
	int big;
	int ans;
	int ans2;
	int j;
	int pos;

	big = biggest(a, a_b);
	j = position_b(a, big, a_b);
	pos = a_b;
	while (sm != a[pos])
		pos++;
	ans = a_b - (j * 2);
	ans2 = (i - a_b) - ((pos - a_b) * 2);
	if (ans < 0 && ans2 < 0)
		a_b = rrr_function2(pos, a, a_b, i);
	else if (ans >= 0 && ans2 >= 0)
		a_b = rr_function2(pos, a, a_b, i);
	else if (ans >= 0 && ans2 < 0)
		a_b = rra_rb2(pos, a, a_b, i);
	else if (ans < 0 && ans2 >= 0)
		a_b = ra_rrb2(pos, a, a_b, i);
	return (a_b);
}
