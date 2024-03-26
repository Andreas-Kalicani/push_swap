/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:15:50 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 12:18:23 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stacks	*stack_a;

	stack_a = ft_process(argc, argv);
	if (!stack_a || ft_checkdup(stack_a))
	{
		print_error_exit();
	}
	if (!ft_checksorted(stack_a))
	{
		ft_sort(&stack_a);
	}
	return (0);
}
