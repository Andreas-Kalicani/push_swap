/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:13:56 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/01/01 13:23:16 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b_to_a(t_stack_node_b **stack_b, t_stack_node_a **stack_a)
{
	t_stack_node_b	*temp;
	t_stack_node_a	*new_node_a;

	if (*stack_b != NULL)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		new_node_a = create_stack_a(temp->next);
		new_node_a->next = *stack_a;
		*stack_a = new_node_a;
	}
}
