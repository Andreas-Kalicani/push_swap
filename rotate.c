/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:03:44 by akalican          #+#    #+#             */
/*   Updated: 2024/01/02 15:26:26 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


void    rotate(t_stack_node_a **stack_a, t_stack_node_b **stack_b)
{
    if (*stack_a != NULL && (*stack_a)->next != NULL && *stack_b != NULL || (*stack_b)->next != NULL)
    {
        rotate_a(stack_a, 1);
        rotate_b(stack_b, 1);
        printf("rr\n");
    }
    else
    {
        return ;
    }
}

void    rotate_a(t_stack_node_a **head_a, int print)
{
    if (*head_a == NULL || (*head_a)->next == NULL)
        return ;
    t_stack_node_a *temp_head;
    
    temp_head = *head_a;
    *head_a = (*head_a)->next;

    t_stack_node_a *current = *head_a;
    while ( current->next != NULL)
            current = current->next;
    
    current->next = temp_head;
    temp_head->next = NULL;

    if (print != 0)
        printf("ra\n");
}

void    rotate_b(t_stack_node_b **head_b, int print)
{
    if (*head_b == NULL || (*head_b)->next == NULL)
        return ;
    t_stack_node_b *temp_head;
    
    temp_head = *head_b;
    *head_b = (*head_b)->next;

    t_stack_node_b *current;

    current = *head_b;
    while (current->next != NULL)
            current = current->next;
    
    current->next = temp_head;
    temp_head->next = NULL;
    
    if (print != 0)
        printf("rb\n");
    
}