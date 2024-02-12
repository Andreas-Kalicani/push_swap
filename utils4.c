/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:43:09 by akalican          #+#    #+#             */
/*   Updated: 2024/02/12 11:44:57 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_index_a(t_stack_node_a *stack_a, int nbr)
{
	int		i;

	i = 0;
	while (stack_a->nbr != nbr)
	{
		i++;
		stack_a = stack_a->next;
	}
	stack_a->index = 0;
	return (i);
}

int	ft_find_index_b(t_stack_node_b *stack_b, int nbr)
{
	int		i;

	i = 0;
	while (stack_b->nbr != nbr)
	{
		i++;
		stack_b = stack_b->next;
	}
	stack_b->index = 0;
	return (i);
}