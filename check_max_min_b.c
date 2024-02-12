/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_min_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:59:40 by akalican          #+#    #+#             */
/*   Updated: 2024/02/12 13:48:14 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     check_max_min_b(t_stack_node_b *stack_b)
{
    check_max_b(stack_b);
    check_min_b(stack_b);
}

void check_min_b(t_stack_node_b *stack_b)
{
    if (stack_b == NULL)
        return ;
    
    int min_value = stack_b->nbr;
    
    while (stack_b != NULL)
    {
        if (stack_b->nbr < min_value)
        {
            min_value = stack_b->nbr;
        }
        stack_b = stack_b->next;
    }
}

void check_max_b(t_stack_node_b *stack_b)
{
    if (stack_b == NULL)
        return ;
    
    int max_value = stack_b->nbr;

    while (stack_b != NULL)
    {
        if (stack_b->nbr > max_value)
        {
            max_value = stack_b->nbr;
        }
        stack_b = stack_b->next;
    }
}

int check_max_b_nbr(t_stack_node_b *stack_b)
{
    if (stack_b == NULL)
        return (0);
    
    int max_value = stack_b->nbr;

    while (stack_b != NULL)
    {
        if (stack_b->nbr > max_value)
        {
            max_value = stack_b->nbr;
        }
        stack_b = stack_b->next;
    }
    return max_value;
}

int check_min_b_nbr(t_stack_node_b *stack_b)
{
    if (stack_b == NULL)
        return (0);
    
    int min_value = stack_b->nbr;
    
    while (stack_b != NULL)
    {
        if (stack_b->nbr < min_value)
        {
            min_value = stack_b->nbr;
        }
        stack_b = stack_b->next;
    }
    return min_value;
}