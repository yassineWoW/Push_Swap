/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:15:18 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/02 12:26:19 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **src, char c)
{
	t_stack		*temp;

	if (ft_lstsize(*src) > 1)
	{
		temp = *src;
		*src = (*src)->next;
		temp->next = NULL;
		ft_lstadd_back(src, temp);
		if (c == 'a')
			write(1, "ra\n", 3);
		else if (c == 'b')
			write(1, "rb\n", 3);
	}
}

void	rrotate(t_stack **stack1, t_stack **stack2, char c)
{
	if (ft_lstsize(*stack1) > 1 && ft_lstsize(*stack2) > 1)
	{
		rotate(stack1, 'r');
		rotate(stack2, 'r');
		if (c == 'r')
			write(1, "rr\n", 3);
	}
}

void	rev_rotate(t_stack **stack, char c)
{
	t_stack		*temp;
	t_stack		*temp2;
	int			size;
	int			i;

	size = ft_lstsize(*stack);
	i = 1;
	if (size > 1)
	{
		temp = ft_lstlast(*stack);
		temp2 = *stack;
		while (i < size - 1)
		{
			temp2 = temp2->next;
			i++;
		}
		temp2->next = NULL;
		ft_lstadd_front(stack, temp);
		if (c == 'a')
			write(1, "rra\n", 4);
		else if (c == 'b')
			write(1, "rrb\n", 4);
	}
}

void	r_rev_rotate(t_stack **stack1, t_stack **stack2, char c)
{
	if (ft_lstsize(*stack1) > 1 && ft_lstsize(*stack2) > 1)
	{
		rev_rotate(stack1, 'r');
		rev_rotate(stack2, 'r');
		if (c == 'r')
			write(1, "rrr\n", 4);
	}
}
// void	test(t_stack *stack_a)
// {
// 	printf("============== stack_a ===========\n");
// 	while (stack_a)
// 	{
// 		printf("%d\n", stack_a->content);
// 		stack_a = stack_a->next;
// 	}
// 	printf("=====================================\n");
// }
// int main()
// {
// 	t_stack *stack_a;
// 	stack_a = ft_lstnew(6, 0);
// 	ft_lstadd_back(&stack_a, ft_lstnew(7, 1));
// 	ft_lstadd_back(&stack_a, ft_lstnew(8, 1));
// 	ft_lstadd_back(&stack_a, ft_lstnew(5, 1));
// 	test(stack_a);
// 	rotate(&stack_a, 'a');	
// 	test(stack_a);
// }
