/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_min_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:21:26 by akalican          #+#    #+#             */
/*   Updated: 2024/01/03 11:01:21 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    check_max_min_a(t_stack_node_a *stack_a)
{
    check_max_a(stack_a);
    check_min_a(stack_a);
}

void check_min_a(t_stack_node_a *stack_a)
{
    if (stack_a == NULL)
        return ;

    int min_value = stack_a->nbr;
    
    while (stack_a != NULL )
    {
        if (stack_a->nbr < min_value)
        {
            min_value = stack_a->nbr;
        } 
        stack_a = stack_a->next;  
    }
}

void check_max_a(t_stack_node_a *stack_a)
{
    if (stack_a == NULL)
        return ;
    
    int max_value = stack_a->nbr;
    
    while (stack_a != NULL)
    {
        if (stack_a->nbr > max_value)
        {
            max_value = stack_a->nbr;
        }
        stack_a = stack_a->next;
    }
}