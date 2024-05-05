/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:06:36 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/05 20:09:01 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_white_space_string(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] != '\0' && !ft_isdigit(argv[i][j]))
		{
			while (argv[i][j] != '\0' && ft_isdigit(argv[i][j]) == 0)
				j++;
			if (argv[i][j] == '\0')
			{
				write(2, "Error\n", 6);
				exit(EXIT_FAILURE);
			}
		}
		i++;
	}
}

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
	while (nums[i])
	{
		j = i + 1;
		while (nums[j])
		{
			if (ft_atoi(nums[i]) == ft_atoi(nums[j]))
			{
				write(2, "Error\n", 6);
				free_2d_arrays(nums);
				exit(1);
			}
			else
				j++;
		}
		i++;
	}
}

char	** get_args(int argc, char *argv[])
{
	char	**splitted_nums;
	char	*nums;
	int		i;

	i = 1;
	nums = NULL;
	splitted_nums = NULL;
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
