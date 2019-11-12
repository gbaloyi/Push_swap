/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:24:29 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/09/05 12:30:32 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

int		check_small(int *a, int a_b, int element);
int		position2(int pos, int i);
int		positioning(int pos, int i);
int		position_b(int *a, int sm, int a_b);
int		check_moves(int j, int *a, int a_b, int i);
int		count_moves(int *a, int a_b, int i);
int		move_direction(int *a, int a_b, int i);
void	ft_swap(int *a, int *b);
void	rrr(int *a, int a_b, int i);
void	rrb(int *a, int a_b);
void	rra(int *a, int a_b, int i);
void	rb(int *a, int a_b);
void	ra(int *a, int a_b, int i);
void	rr(int *a, int a_b, int i);
void	sa(int *a, int a_b, int i);
void	sb(int *a, int a_b);
void	ss(int *a, int a_b, int i);
int		pa(int *a, int a_b);
int		pb(int *a, int a_b, int i);
int		biggest(int *a, int i);
int		second_biggest(int *a, int i);
int		third_biggest(int *a, int i);
int		condition_checker(int *a, int a_b, int i, int *big);
void	print_arr(int *a, int i, int a_b);
int		check_sort(int *a, int a_b, int i);
void	small_sort(int *a, int a_b, int i);
void	small_sort_two(int *a, int a_b, int i);
void	small_sort_three(int *a, int a_b, int i);
int		push_back(int *a, int a_b, int i);
int		push_back2(int *a, int a_b, int i);
void	push_back3(int *a, int a_b, int i);
int		check_sort_a(int *a, int a_b, int i);
void	sort_two(int *a, int a_b, int i);
int		pb_rb(int *a, int a_b, int i, int sm);
int		rra_rb(int element, int *a, int a_b, int i);
int		ra_rrb(int element, int *a, int a_b, int i);
int		rr_function(int element, int *a, int a_b, int i);
int		rrr_function(int element, int *a, int a_b, int i);
int		biggest_in_b(int *a, int a_b);
void	move_up(int *a, int a_b, int i, int sm);
int		move_direction2(int *a, int a_b, int i, int pos);
int		pos_sm(int *a, int a_b, int element);
void	args_two(char **str, int a_b);
void	args_many(int argc, char **argv);
int		check_split_params(char **str, int i);
int		check_all2(int argc, char **argv);
int		checking_params(int argc, char **str, int i);
int		check_all(int argc, char **argv);
int		check_numbers(int argc, char **argv, int i);
int		check_doubles(int argc, char **argv, int i);
int		checking_overflow(int argc, char **argv, int i);
int		check_min(char *str);
int		check_max(char *str);
int		check_alpha(int c, int c2);
int		program_loop(int *a, int a_b, int i, int *big);
int		rra_rb2(int element, int *a, int a_b, int i);
int		ra_rrb2(int element, int *a, int a_b, int i);
int		rr_function2(int element, int *a, int a_b, int i);
int		rrr_function2(int element, int *a, int a_b, int i);
int		pos_big(int *a, int a_b);

#endif
