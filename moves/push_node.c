/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:15:20 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/26 18:43:45 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to_stack(t_stack **src, t_stack **dest, char c)
{
	t_stack	*new;
	t_stack	*temp;

	if (*src)
	{
		new = *src;
		temp = (*src)->next;
		ft_lstadd_front(dest, new);
		*src = temp;
		if (c == 'a')
			write(1, "pa\n", 3);
		else if (c == 'b')
			write(1, "pb\n", 3);
	}
}
// int main()
// {
// 	t_stack *stack_a;
// 	t_stack *stack_b;
// 	stack_b = ft_lstnew(4, 0);
// 	stack_a = ft_lstnew(5, 0);
// 	ft_lstadd_back(&stack_a, ft_lstnew(6, 1));
// 	ft_lstadd_back(&stack_a, ft_lstnew(7, 1));
// 	ft_lstadd_back(&stack_a, ft_lstnew(8, 1));
// 	test(stack_a, stack_b);
// 	push_to_stack(&stack_b, &stack_a, 'a');	
// 	test(stack_a, stack_b);
// }
