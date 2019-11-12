/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:29:16 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/05 12:45:43 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"

void	rb(int *a, int a_b);
void	ra(int *a, int a_b, int i);
void	rra(int *a, int a_b, int i);
void	rrb(int *a, int a_b);
void	rr(int *a, int a_b, int i);
void	rrr(int *a, int a_b, int i);
int		pb(int *a, int a_b, int i);
int		pa(int *a, int a_b);
void	ss(int *a, int a_b, int i);
void	sb(int *a, int a_b);
void	sa(int *a, int a_b, int i);
void	ft_swap(int *a, int *b);
int		check_sort(int *a, int a_b, int i);
void	results(int *a, int a_b, int i);
int		check_line(char *line, int *a, int a_b, int i);
void	print_arr(int *a, int i, int a_b);
void	args_two(char **str, int a_b);
void	args_many(int argc, char **argv);
int		check_alpha(int c, int c2);
int		check_max(char *str);
int		check_min(char *str);
int		checking_overflow(int argc, char **argv, int i);
int		check_split_params(char **str, int i);
int		checking_params(int argc, char **str, int i);
int		check_all2(int argc, char **argv);
int		check_all(int argc, char **argv);
int		check_doubles(int argc, char **argv, int i);
int		check_numbers(int argc, char **argv, int i);

#endif
