/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 07:14:10 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/27 15:13:17 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "srcs/libft/libft.h"

void	push_swap(int argc, char **argv)
{
	char 	**numbers;
	t_stack	*stack_a;
	t_stack *stack_b;
	t_stack	*temp;
	
	stack_a = NULL;
	stack_b = NULL;

	check_for_empty(argc, argv);

	numbers = get_args(argc, argv);

	check_for_alpha(numbers);
	check_dups(numbers);
	put_numbers_into_nodes(numbers, &stack_a);
	free_2d_arrays(numbers);
	temp = stack_a;
	
	if (is_sorted(stack_a))
	{
		if (ft_lstsize(temp) == 2)
			swap(&stack_a, 'a');
		else if (ft_lstsize(temp) == 3)
			sort_3(&stack_a);
		else if (ft_lstsize(temp) == 4)
			sort_4(&stack_a, &stack_b);
		else if (ft_lstsize(temp) == 5)
			sort_5(&stack_a, &stack_b);
		// else
		// 	sort_nums(stack_a, stack_b);
		test(stack_a);
	}
	else
		exit(0);
}


 