/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:59:33 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/29 16:29:21 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*nextnode;

	if (!lst)
		return ;
	while (*lst)
	{
		nextnode = (*lst)->next;
		free(*lst);
		*lst = nextnode;
	}
}
