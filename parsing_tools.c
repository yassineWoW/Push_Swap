/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:06:36 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/03 17:14:17 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_max_int(char *number)
{
	long long	num;

	num = ft_atoi(number);
	if (num > 2147483647 || num < -2147483648)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	free_2d_arrays(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		free(s[i]);
		s[i] = NULL;
		i++;
	}
	free(s);
	s = NULL;
}

void	check_dups(char **nums)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (nums[i])
	{
		while (nums[j])
		{
			if (ft_atoi(nums[i]) == ft_atoi(nums[j]))
			{
				write(2, "Error\n", 6);
				free_2d_arrays(nums);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

char	**get_args(int argc, char *argv[])
{
	char	**splitted_nums;
	char	*nums;
	int		i;

	i = 1;
	nums = NULL;
	if (argc >= 2)
	{
		while (i < argc)
		{
			nums = ft_strjoin(nums, " ");
			nums = ft_strjoin(nums, argv[i]);
			i++;
		}
	}
	splitted_nums = ft_split(nums, ' ');
	free(nums);
	nums = NULL;
	return (splitted_nums);
}
