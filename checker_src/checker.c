/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:19:15 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/05 12:45:49 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

void	results(int *a, int a_b, int i)
{
	int n;

	n = check_sort(a, a_b, i);
	if (n == 1)
		ft_putstr("\e[32mOK\e[0m\n");
	else
		ft_putstr("\e[31mKO\e[0m\n");
}

int		check_line(char *line, int *a, int a_b, int i)
{
	if (ft_strcmp("sa", line) == 0)
		sa(a, a_b, i);
	else if (ft_strcmp("sb", line) == 0)
		sb(a, a_b);
	else if (ft_strcmp("ss", line) == 0)
		ss(a, a_b, i);
	else if (ft_strcmp("pb", line) == 0)
		a_b = pb(a, a_b, i);
	else if (ft_strcmp("pa", line) == 0)
		a_b = pa(a, a_b);
	else if (ft_strcmp("rb", line) == 0)
		rb(a, a_b);
	else if (ft_strcmp("ra", line) == 0)
		ra(a, a_b, i);
	else if (ft_strcmp("rr", line) == 0)
		rr(a, a_b, i);
	else if (ft_strcmp("rra", line) == 0)
		rra(a, a_b, i);
	else if (ft_strcmp("rrb", line) == 0)
		rrb(a, a_b);
	else if (ft_strcmp("rrr", line) == 0)
		rrr(a, a_b, i);
	else
		a_b = -1;
	return (a_b);
}

int		main(int argc, char **argv)
{
	int a_b;

	a_b = 0;
	if (check_all(argc, argv))
	{
		if (argc == 2)
			args_two(argv, a_b);
		else if (argc > 2)
			args_many(argc, argv);
	}
	return (0);
}
