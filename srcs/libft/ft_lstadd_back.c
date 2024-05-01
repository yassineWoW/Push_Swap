/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:44:54 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/27 21:43:35 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	if (!lst)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
