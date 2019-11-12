/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:00:51 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/04 16:02:59 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	args_two(char **str, int a_b)
{
	char	**str2;
	int		i;
	int		j;
	int		a[500];
	int		big[3];

	i = 0;
	j = 0;
	str2 = ft_strsplit(str[1], ' ');
	while (str2[j])
		a[i++] = ft_atoi(str2[j++]);
	big[0] = biggest(a, i);
	big[1] = second_biggest(a, i);
	big[2] = third_biggest(a, i);
	if (i > 3)
		a_b = program_loop(a, a_b, i, big);
	else if (i == 3)
		small_sort(a, a_b, i);
	else if (i == 2)
		sort_two(a, a_b, i);
}

void	args_many(int argc, char **argv)
{
	int i;
	int j;
	int a[500];
	int big[3];
	int a_b;

	i = 0;
	j = 1;
	a_b = 0;
	while (j < argc)
		a[i++] = ft_atoi(argv[j++]);
	big[0] = biggest(a, i);
	big[1] = second_biggest(a, i);
	big[2] = third_biggest(a, i);
	if (i > 3)
		a_b = program_loop(a, a_b, i, big);
	else if (i == 3)
		small_sort(a, a_b, i);
	else if (i == 2)
		sort_two(a, a_b, i);
}
