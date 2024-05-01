/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:41:27 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/01 15:59:26 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_array(t_stack *stack, int *array, int array_size)
{
	t_stack *temp;
	int		i;
	
	temp = stack;
	i = 0;
	while (temp && i < array_size)
	{
		array[i++] = temp->content;
		temp = temp->next;
	}
}

void	swap_index(int *arr, int i, int j)
{
	int	temp;
	
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int		find_smallest_index(int arr[],int start, int end)
{
	int		i;
	int		j;
	
	j = start;
	i = j + 1;
	while (i < end)
	{
		if (arr[i] < arr[j])
			j = i;
		i++;
	}
	return (j);
}

void	sort_array(int *arr, int len)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = find_smallest_index(arr, i, len);
		if (arr[i] > arr[j])
			swap_index(arr, i, j);
		i++;
	}
}

void	index_list(t_stack **stack, int len)
{
	t_stack	*temp;
	int		*arr;
	int		i;

	arr = malloc(len * sizeof(int));
	fill_array(*stack, arr, len);
	sort_array(arr, len);
	i = 0;
	while (i < len)
	{
		temp = *stack;
		while (temp)
		{
			if (temp->content == arr[i])
				temp->index = i;
			temp = temp->next;
		}
		i++;
	}
	free(arr);
}