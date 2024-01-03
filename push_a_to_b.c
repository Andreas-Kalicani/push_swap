/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:58:24 by akalican          #+#    #+#             */
/*   Updated: 2024/01/02 13:48:31 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	push_a_to_b(t_stack_node_a **stack_a, t_stack_node_b **stack_b)
{
	t_stack_node_a	*temp;
	t_stack_node_b	*new_node_b;

	if (*stack_a != NULL)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		new_node_b = create_newnode_b(temp->nbr);
		new_node_b->next = *stack_b;
		*stack_b = new_node_b;
		printf("pa\n");
	}
}