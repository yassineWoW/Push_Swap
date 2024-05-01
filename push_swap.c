/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 07:14:10 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/01 17:32:18 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "srcs/libft/libft.h"

void	sort_choice(t_stack *stack_a, t_stack *stack_b)
{
	if (is_sorted(stack_a))
	{
		if (ft_lstsize(stack_a) <= 3)
			sort_3(&stack_a);
		else if (ft_lstsize(stack_a) == 4)
			sort_4(&stack_a, &stack_b);
		else if (ft_lstsize(stack_a) == 5)
			sort_5(&stack_a, &stack_b);
		else if (ft_lstsize(stack_a) <= 100)
			sort_nums(&stack_a, &stack_b, 15);
		else
			sort_nums(&stack_a, &stack_b, 50);
	}
	
}

void	push_swap(int argc, char **argv)
{
	char 	**numbers;
	t_stack	*stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	check_for_empty(argc, argv);
	numbers = get_args(argc, argv);
	check_for_alpha(numbers);
	check_dups(numbers);
	put_numbers_into_nodes(numbers, &stack_a);
	index_list(&stack_a, ft_lstsize(stack_a));
	sort_choice(stack_a, stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}


 