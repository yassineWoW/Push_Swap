/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:15:15 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/06 13:28:19 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **stack, char c)
{
	t_stack	*temp;
	t_stack	*temp1;

	if (ft_lstsize(*stack) > 1)
	{
		temp = *stack;
		temp1 = (*stack)->next;
		*stack = (*stack)->next->next;
		ft_lstadd_front(stack, temp);
		ft_lstadd_front(stack, temp1);
		if (c == 'a')
			write(1, "sa\n", 3);
		else if (c == 'b')
			write(1, "sb\n", 3);
	}
}

void	s_swap(t_stack **stack1, t_stack **stack2, char c)
{
	swap(stack1, 's');
	swap(stack2, 's');
	if (c == 's')
		write(1, "ss\n", 3);
}
