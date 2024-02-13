/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:37:13 by akalican          #+#    #+#             */
/*   Updated: 2024/02/13 10:04:41 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_checksorted(t_stack_node_a *stack_a)
{
    int i;

    i = stack_a->nbr;
    while (stack_a->next)
    {
        if (i > stack_a->nbr)
            return (0);
        i = stack_a->nbr;
        stack_a = stack_a->next;
    }
    return (1);}
