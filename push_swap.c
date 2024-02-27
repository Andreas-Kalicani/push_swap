/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:15:50 by akalican          #+#    #+#             */
/*   Updated: 2024/02/27 16:05:48 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_stack_node_a	*stack_a;
	
	stack_a = ft_process(argc, argv);
	printf("%p", ft_process(argc, argv));
	printf("\n");
	if (!stack_a || check_for_doubles(stack_a))
	{
		print_error_exit();
	}
	if (!ft_checksorted(stack_a))
	{
		ft_putstr_fd("suuu",1);
		ft_sort(&stack_a);
	}
	printf("ok");
	return (0);
}
