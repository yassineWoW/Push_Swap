/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:11:50 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/03 17:09:34 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_error(t_stack **stack_a, t_stack **stack_b)
{
	write(2, "Error\n", 6);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	exit(1);
}

void	do_moves(char *move, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strncmp(move, "sa\n") == 0)
		swap(stack_a, 'w');
	else if (ft_strncmp(move, "sb\n") == 0)
		swap(stack_b, 'w');
	else if (ft_strncmp(move, "ss\n") == 0)
		s_swap(stack_a, stack_b, 'w');
	else if (ft_strncmp(move, "pa\n") == 0)
		push_to_stack(stack_b, stack_a, 'w');
	else if (ft_strncmp(move, "pb\n") == 0)
		push_to_stack(stack_a, stack_b, 'w');
	else if (ft_strncmp(move, "ra\n") == 0)
		rotate(stack_a, 'w');
	else if (ft_strncmp(move, "rb\n") == 0)
		rotate(stack_b, 'w');
	else if (ft_strncmp(move, "rr\n") == 0)
		rrotate(stack_a, stack_b, 'w');
	else if (ft_strncmp(move, "rra\n") == 0)
		rev_rotate(stack_a, 'w');
	else if (ft_strncmp(move, "rrb\n") == 0)
		rev_rotate(stack_b, 'w');
	else if (ft_strncmp(move, "rrr\n") == 0)
		r_rev_rotate(stack_a, stack_b, 'w');
	else
		ft_error(stack_a, stack_b);
}
