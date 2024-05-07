/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:20:22 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/06 15:42:36 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	min_to_top_5(t_stack **stack_a, int min)
{
	t_stack	*temp;

	temp = *stack_a;
	if (temp->next->content == min)
		swap(stack_a, 'a');
	else if (temp->next->next->content == min)
	{
		rotate(stack_a, 'a');
		swap(stack_a, 'a');
	}
	else if (temp->next->next->next->content == min)
	{
		rev_rotate(stack_a, 'a');
		rev_rotate(stack_a, 'a');
	}
	else if (temp->next->next->next->next->content == min)
		rev_rotate(stack_a, 'a');
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int		min;
	t_stack	*temp;

	temp = *stack_a;
	min = find_min(*stack_a);
	if (is_sorted(*stack_a))
	{
		if (temp->content == min)
			push_to_stack(stack_a, stack_b, 'b');
		else
		{
			min_to_top_5(stack_a, min);
			push_to_stack(stack_a, stack_b, 'b');
		}
		sort_4(stack_a, stack_b);
		push_to_stack(stack_b, stack_a, 'a');
	}
}
