/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:20:42 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/01 16:57:22 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	min_to_top_4(t_stack **stack_a)
{
	t_stack	*temp;
	int		min;

	temp = *stack_a;
	min = find_min(*stack_a);
	if (temp->next->content == min)
		swap(stack_a, 'a');
	else if (temp->next->next->content == min)
	{
		rev_rotate(stack_a, 'a');
		rev_rotate(stack_a, 'a');
	}
	else if (temp->next->next->next->content == min)
		rev_rotate(stack_a, 'a');
}

void	sort_4(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	int		min;

	temp = *stack_a;
	min = find_min(*stack_a);
	if (is_sorted(*stack_a))
	{
		if (temp->content == min)
			push_to_stack(stack_a, stack_b, 'b');
		else
		{
			min_to_top_4(stack_a);
			push_to_stack(stack_a, stack_b, 'b');
		}
		sort_3(stack_a);
		push_to_stack(stack_b, stack_a, 'a');
	}
}
