/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:06:01 by yimizare          #+#    #+#             */
/*   Updated: 2024/05/02 13:20:04 by yimizare         ###   ########.fr       */
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
	while (ft_isdigit(string[i]))
	{
		result *= 10;
		result += string[i] - '0';
		i++;
	}
	return (result * ichara);
}
