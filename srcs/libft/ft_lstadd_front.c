/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:05:10 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/27 20:17:12 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
