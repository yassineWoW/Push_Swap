/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:09:06 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/03 17:12:00 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_moves(t_stack **stack_a, t_stack **stack_b)
{
	char	*line;
	t_stack	*a;
	t_stack	*b;

	line = NULL;
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		do_moves(line, stack_a, stack_b);
		a = *stack_a;
		b = *stack_b;
		free(line);
		line = NULL;
	}
	if (is_sorted(*stack_a) == 1)
		write(1, "KO\n", 3);
	else
		write(2, "OK\n", 3);
}

int	main(int argc, char *argv[])
{
	char	**numbers;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc >= 2)
	{
		stack_a = NULL;
		stack_b = NULL;
		check_for_empty(argc, argv);
		numbers = get_args(argc, argv);
		check_sign(numbers);
		check_for_alpha(numbers);
		check_dups(numbers);
		put_numbers_into_nodes(numbers, &stack_a);
		check_moves(&stack_a, &stack_b);
		ft_lstclear(&stack_a);
		ft_lstclear(&stack_b);
	}
	return (0);
}