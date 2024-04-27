/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:31:20 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/27 13:31:34 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test(t_stack *stack_a)
{
	printf("============== stack_a   =================\n");
	while (stack_a)
	{
		printf("%d\n", stack_a->content);
		stack_a = stack_a->next;
	}
	printf("========================================\n");
	printf("============== stack_b	 =================\n");
	// while (stack_b)
	// {
	// 	printf("%d\n", stack_b->content);
	// 	stack_b = stack_b->next;
	// }
}

// int main()
// {
// 	t_stack *stack_a = NULL;

// 	stack_a = ft_lstnew(1, 0);
	
// 	ft_lstadd_back(&stack_a, ft_lstnew(2, 1));
// 	ft_lstadd_back(&stack_a, ft_lstnew(3, 2));

// 	test(stack_a);
// 	sort_3(&stack_a);
//  	test(stack_a);
// 	int i = find_max(stack_a);
// 	printf("%d\n", i);
	
// }