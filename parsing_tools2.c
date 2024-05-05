/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_tools2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:24:29 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/05 20:18:24 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sign(char **nums)
{
	int	i;
	int	j;

	i = 0;
	while (nums[i])
	{
		j = 0;
		if ((nums[i][j] == '+' || nums[i][j] == '-') && nums[i][j] != '\0')
			j++;
		if (!ft_isdigit(nums[i][j]) && nums[i][j] != '\0')
		{
			write(2, "Error\n", 6);
			free_2d_arrays(nums);
			exit(1);
		}
		if ((nums[i][j] == '+' || nums[i][j] == '-') && nums[i][j] != '\0')
		{
			write(2, "Error\n", 6);
			free_2d_arrays(nums);
			exit(1);
		}
		i++;
	}
}

void	check_for_empty(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
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
	int		i;
	int		j;

	i = 0;
	while (splited_nums[i] != NULL)
	{
		j = 0;
		while (splited_nums[i][j] != '\0')
		{
			if (splited_nums[i][j] == '+' || splited_nums[i][j] == '-')
				j++;
			if (!ft_isdigit(splited_nums[i][j]))
			{
				write(2, "Error\n", 6);
				free_2d_arrays(splited_nums);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

int	is_sorted(t_stack *stack_a)
{
	if (ft_lstsize(stack_a) == 0)
		return (1);
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}

void	put_numbers_into_nodes(char **numbers, t_stack	**stack_a)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (numbers[i])
	{
		check_max_int(numbers[i]);
		num = ft_atoi(numbers[i]);
		ft_lstadd_back(stack_a, ft_lstnew(num, i));
		i++;
	}
	free_2d_arrays(numbers);
}
