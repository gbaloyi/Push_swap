/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:18:44 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/03 10:18:52 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_up(int *a, int a_b, int i, int sm)
{
	while (sm != a[a_b])
	{
		ra(a, a_b, i);
		ft_putstr("ra\n");
	}
}
