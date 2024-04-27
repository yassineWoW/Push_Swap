/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:42:34 by yimizare          #+#    #+#             */
/*   Updated: 2023/11/30 20:16:33 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloccee;

	if (size < 0)
		return (NULL);
	if (size && count > SIZE_MAX / size)
		return (NULL);
	alloccee = (void *)malloc(count * size);
	if (alloccee == NULL)
		return (NULL);
	ft_bzero(alloccee, (count * size));
	return (alloccee);
}
