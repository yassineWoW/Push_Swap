/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:06:01 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/05 16:24:19 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(const char	*string)
{
	long long		i;
	long long		ichara;
	long long		result;

	i = 0;
	ichara = 1;
	result = 0;
	while (string[i] == 32 || (string[i] >= 9 && string[i] <= 13))
		i++;
	if (string[i] == '-')
	{
		ichara = -1;
		i++;
	}
	else if (string[i] == '+')
		i++;
	while (string[i])
	{
		if (ft_isdigit(string[i]))
			result = result * 10 + (string[i] - '0');
		else
			(write(2, "Error\n", 6), exit(1));
		i++;
	}
	return (result * ichara);
}
