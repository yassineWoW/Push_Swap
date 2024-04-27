/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:47:03 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/23 08:22:10 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_stack **lst)
{
	t_stack *temp;
	int		i;
	if (!lst)
		return ;
		temp = *lst;
	i = 0;
	while (temp)
	{
		temp->index = i;
		temp = temp->next;
		i++;
	}
}
