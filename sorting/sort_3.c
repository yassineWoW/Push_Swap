/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:20:45 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/06 12:43:03 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min(t_stack *stack)
{
	t_stack	*temp;
	int		min;

	min = stack->content;
	if (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (temp->content < min)
				min = temp->content;
			temp = temp->next;
		}
	}
	return (min);
}

int	find_max(t_stack *stack)
{
	t_stack	*temp;
	int		max;

	max = stack->content;
	if (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (temp->content > max)
				max = temp->content;
			temp = temp->next;
		}
	}
	return (max);
}

void	sort_3(t_stack **stack_a)
{
	int	min;
	int	max;

	max = find_max(*stack_a);
	min = find_min(*stack_a);
	if (ft_lstsize(*stack_a) < 3 && is_sorted(*stack_a) == 1)
	{
		swap(stack_a, 'a');
		return ;
	}
	while (is_sorted(*stack_a) == 1)
	{
		if (max == (*stack_a)->content)
			rotate(stack_a, 'a');
		if (min == (*stack_a)->next->content)
			swap(stack_a, 'a');
		if (max == (*stack_a)->next->content)
			rev_rotate(stack_a, 'a');
	}
}
