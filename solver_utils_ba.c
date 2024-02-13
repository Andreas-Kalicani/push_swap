/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ba.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:39:51 by akalican          #+#    #+#             */
/*   Updated: 2024/02/13 15:46:53 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_case_rarb_a(t_stack_node_a *stack_a, t_stack_node_b *stack_b, int c)
{
    int i;
    
    i = ft_find_place_a(stack_a, c);
    if (i < ft_find_index_b(stack_b, c))
    {
        
    }
}