/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:06:36 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/29 15:42:49 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// this function is to be used to free double pointers and their pointers mostly used for the split function

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
// this function checks if there's duplicates in the number to be sorted
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

// this function joins arguments and puts a space between them and then removes tabs if there's any 
// and puts each number in a string of its own in a array of strings after it splited them with spaces
// so that "1 5 6 7 8" becomes "1", "7", "6", "5", "8", 

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
