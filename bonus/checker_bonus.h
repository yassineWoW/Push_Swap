/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:43:41 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/05 12:50:53 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../srcs/libft/libft.h"
# include "../push_swap.h"
# include "get_next_line.h"

void	do_moves(char *move, t_stack **stack_a, t_stack **stack_b);
void	check_moves(t_stack **stack_a, t_stack **stack_b);
void	ft_error(t_stack **stack_a, t_stack **stack_b);
int		is_sorted_b(t_stack *stack_a, t_stack *stack_b);

#endif