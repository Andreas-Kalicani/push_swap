/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:58:24 by akalican          #+#    #+#             */
/*   Updated: 2023/12/29 20:37:50 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
void    push_a_to_b(t_stack_node_a **stack_a, t_stack_node_b **stack_b)
{
    if(*stack_a != NULL)
    {
        t_stack_node_a *temp;
        
        temp = *stack_a;
        *stack_a = (*stack_a)->next;

        t_stack_node_b *new_node_b = create_newnode_b(temp->nbr);
        new_node_b->next = *stack_a;
        *stack_b = new_node_b;
    }
}
*/
void push_a_to_b(t_stack_node_a **stack_a, t_stack_node_b **stack_b)
{
    if (*stack_a != NULL)
    {
        t_stack_node_a *temp = *stack_a;
        *stack_a = (*stack_a)->next;

        // Create a new node for list B
        t_stack_node_b *new_node_b = create_newnode_b(temp->nbr);

        // Set the next pointer of the new node in list B
        new_node_b->next = *stack_b;

        // Update the head pointer of list B
        *stack_b = new_node_b;
    }
}