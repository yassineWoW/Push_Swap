/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:08:18 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/01 11:59:45 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstnew(int content, int index)
{
	t_stack	*newnode;

	newnode = (t_stack *)malloc(sizeof(t_stack));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->index = index;
	newnode->next = NULL;
	return (newnode);
}
