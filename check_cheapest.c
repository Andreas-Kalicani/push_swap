/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cheapest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:53:30 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/01/05 13:12:55 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
# include <stdbool.h>

void	get_top_stack_a(t_stack_node_a **head_a, int i, int *pb, int *ra,
		int *rra)
{
	int	size;

	*pb = 1;
	*ra = 0;
	*rra = 0;
	if ((*head_a)->nbr == i)
		return ;
	size = stack_size(*head_a);
	if (size % 2 == 0)
	{
		if (i + 1 > size / 2)
			*rra = (size - i);
		else
			*ra = i;
	}
	else
	{
		if (i > size / 2)
			*rra = (size - i);
		else
			*ra = i;
	}
}

void    check_cost(t_stack_node_a *stack_a, int i)
{
    int pb = 0, ra = 0, rb = 0, rr = 0, rra = 0, rrb = 0, rrr = 0;

    int cost = pb + ra + rb + rr + rra + rrb + rrr;
    if ( i = 1 || stack_a->cheapest && stack_a->push_cost > cost)
    {
        stack_a->cheapest = true;
        stack_a->push_cost = cost;
    }
}
