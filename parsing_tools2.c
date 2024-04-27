/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_tools2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:24:29 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/27 15:19:39 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 void	check_for_empty(int argc, char **argv)
{
	int	i;

	i = 1;
	while(i < argc)
	{
		if (ft_strlen(argv[i]) == 0)
		{
				write(2, "Error\n", 6);
				exit(EXIT_FAILURE);
		}
		i++;
	}
}

void	check_for_alpha(char **splited_nums)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (splited_nums[i])
	{
		while(splited_nums[i][j])
		{
			if (splited_nums[i][j] != '\0' && ft_isalpha(splited_nums[i][j]))
			{
				write(2, "Error\n", 6);
				free_2d_arrays(splited_nums);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

// this function checks if the numbers to be sorted are already sorted 

int		is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if(stack->content > stack->next->content)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	put_numbers_into_nodes(char **numbers, t_stack	**stack_a)
{
	t_stack	*node;
 	int		i;
	int		num;
		
	i = 0;
	while (numbers[i])
 	{
		num = ft_atoi(numbers[i]);
		node = ft_lstnew(num, i);
		if (node)
			ft_lstadd_back(stack_a, node);
 		i++;
	}
	//free_2d_arrays(numbers);
}
