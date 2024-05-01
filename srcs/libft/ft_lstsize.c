/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:18:27 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/01 12:17:50 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_stack *lst)
{
	t_stack *temp;
	int	counter;

	temp = lst;
	counter = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}
