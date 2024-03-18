/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:13:56 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/03/05 23:16:47 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	push_b_to_a(t_stacks **stack_a, t_stacks **stack_b, int j)
{
	t_stacks	*tmp;

    ft_putstr_fd("\npushing b_to_A\n", 1);
	if (!*stack_b)
		return ;
	tmp = *stack_a;
	*stack_a = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_b)->next = tmp;
	if (j == 0)
		write(1, "pa\n", 3);
}
