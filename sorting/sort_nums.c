/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:20:00 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/01 16:49:19 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_index(t_stack *stack_a, int value)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		if (value == stack_a->content)
			return (i);
		i++;
		stack_a = stack_a->next;
	}
	return (-1);
}

int	get_index_value(t_stack *stack_b, int index)
{
	int	value;

	value = -1;
	while (stack_b)
	{
		if (stack_b->index == index)
		{
			value = stack_b->content;
			break ;
		}
		stack_b = stack_b->next;
	}
	return (value);
}

void	send_to_b(t_stack **stack_a, t_stack **stack_b, int range)
{
	int		i;

	i = 0;
	while (ft_lstsize(*stack_a))
	{
		if ((*stack_a)->index <= i)
		{
			push_to_stack(stack_a, stack_b, 'b');
			rotate(stack_b, 'b');
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			push_to_stack(stack_a, stack_b, 'b');
			i++;
		}
		else
			rotate(stack_a, 'a');
	}
}

void	push_back_to_a(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_index;
	int	value;
	int	max_index;

	max_index = ft_lstsize(*stack_b) - 1;
	while (ft_lstsize(*stack_b))
	{
		value = get_index_value(*stack_b, max_index);
		stack_index = find_index(*stack_b, value);
		while ((*stack_b)->content != value)
		{
			if (stack_index <= ft_lstsize(*stack_b) / 2)
				rotate(stack_b, 'b');
			else
				rev_rotate(stack_b, 'b');
		}
		if ((*stack_b)->content == value)
		{
			push_to_stack(stack_b, stack_a, 'a');
			max_index--;
		}
	}
}

void	sort_nums(t_stack **stack_a, t_stack **stack_b, int range)
{
	send_to_b(stack_a, stack_b, range);
	push_back_to_a(stack_a, stack_b);
}
