/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:58:24 by akalican          #+#    #+#             */
/*   Updated: 2024/02/27 15:07:16 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void push_a_to_b(t_stack_node_a **stack_a, t_stack_node_b **stack_b)
{
    t_stack_node_a *temp;

    if (!*stack_a)
        return;

    temp = *stack_a;
    *stack_a = (*stack_a)->next;

    // Create a new node of type t_stack_node_b
    t_stack_node_b *new_node_b = create_newnode_b(temp->nbr);

    // Update the next pointer of the new node
    new_node_b->next = *stack_b;

    // Update the head pointer of stack B
    *stack_b = new_node_b;

    // Free the memory of the node removed from stack A
    free(temp);

    printf("pb\n");
}