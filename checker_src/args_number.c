/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:25:03 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/05 12:34:44 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	args_two(char **str, int a_b)
{
	char	**str2;
	int		i;
	int		j;
	int		a[500];
	char	*line;

	i = 0;
	j = 0;
	str2 = ft_strsplit(str[1], ' ');
	while (str2[j])
		a[i++] = ft_atoi(str2[j++]);
	while (get_next_line(0, &line))
	{
		a_b = check_line(line, a, a_b, i);
		if (a_b == -1)
			break ;
	}
	if (a_b != -1)
		results(a, a_b, i);
	else
		ft_putstr("Error\n");
}

void	args_many(int argc, char **argv)
{
	int		i;
	int		j;
	int		a[500];
	char	*line;
	int		a_b;

	i = 0;
	j = 1;
	a_b = 0;
	while (j < argc)
		a[i++] = ft_atoi(argv[j++]);
	while (get_next_line(0, &line))
	{
		a_b = check_line(line, a, a_b, i);
		if (a_b == -1)
			break ;
	}
	if (a_b != -1)
		results(a, a_b, i);
	else
		ft_putstr("Error\n");
}
