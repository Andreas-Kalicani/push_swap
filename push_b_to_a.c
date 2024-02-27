/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:13:56 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/02/27 14:13:19 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


void push_b_to_a(t_stack_node_b **stack_b, t_stack_node_a **stack_a)
{
    t_stack_node_b *temp_b;

    // Check if stack B is not empty
    if (*stack_b != NULL)
    {
        temp_b = *stack_b;
        *stack_b = (*stack_b)->next;

        // Create a new node of type t_stack_node_a
        t_stack_node_a *new_node_a = create_stack_a(temp_b->nbr);


        // Update the next pointer of the new node
        new_node_a->next = *stack_a;

        // Update the head pointer of stack A
        *stack_a = new_node_a;

        // Free the memory of the node removed from stack B
        free(temp_b);

        printf("pa\n");
    }
}