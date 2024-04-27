/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:59:33 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/23 08:27:13 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_stack **lst, void (*del)(int))
{
	t_stack	*nextnode;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nextnode = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nextnode;
	}
}
