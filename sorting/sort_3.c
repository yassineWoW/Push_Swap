/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:20:45 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/26 18:55:18 by yimizare         ###   ########.fr       */
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
// void	test(t_stack *stack_a)
// {
// 	printf("============== stack_a   =================\n");
// 	while (stack_a)
// 	{
// 		printf("%d\n", stack_a->content);
// 		stack_a = stack_a->next;
// 	}
// 	printf("========================================\n");
// // 	printf("============== stack_b	 =================\n");
// // 	while (stack_b)
// // 	{
// // 		printf("%d\n", stack_b->content);
// // 		stack_b = stack_b->next;
// // 	}
// }
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