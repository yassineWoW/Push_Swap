/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 07:14:34 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/01 17:32:47 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "srcs/libft/libft.h"

char	**get_args(int argc, char *argv[]);
int		is_sorted(t_stack *stack);
void	check_dups(char **nums);
void	free_2d_arrays(char **s);
void	push_to_stack(t_stack **src, t_stack **dest, char c);
void	put_numbers_into_nodes(char **numbers, t_stack	**stack_a);
void	check_for_empty(int argc, char **argv);
void	check_for_alpha(char **splited_nums);
void	push_to_stack(t_stack **src, t_stack **dest, char c);
void	rotate(t_stack **src, char c);
void	rrotate(t_stack **stack1, t_stack **stack2);
void	rev_rotate(t_stack **stack, char c);
void	r_rev_rotate(t_stack **stack1, t_stack **stack2);
void	swap(t_stack **stack, char c);
void	s_swap(t_stack **stack1, t_stack **stack2);
void	sort_3(t_stack **stack_a);
void	sort_4(t_stack **stack_a, t_stack **stack_b);
void	sort_5(t_stack **stack_a, t_stack **stack_b);
void	sort_nums(t_stack **stack_a, t_stack **stack_b, int range);
int		find_max(t_stack *stack);
int		find_min(t_stack *stack);
void	push_swap(int argc, char **argv);
void	test(t_stack *stack_a);
void	index_list(t_stack **stack, int len);

#endif
