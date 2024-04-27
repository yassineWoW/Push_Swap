/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimizare <yimizare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:53:12 by yimizare          #+#    #+#             */
/*   Updated: 2024/04/27 15:05:30 by yimizare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	else
	{
		push_swap(argc, argv);
		system("leaks push_swap");
	}
	return 0;
}