/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:24:25 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/21 14:54:48 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*new;

	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	if (!s1 && !s2)
		return (NULL);
	new = (char *)ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}	
	j = 0;
	while (s2[j] != '\0')
		new[i++] = s2[j++];

	return (new);
}
