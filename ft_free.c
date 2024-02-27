/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:58:26 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/02/26 17:03:39 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack_node_a **stack_a)
{
	t_stack_node_a	*tmp;

	if (!stack_a)
		return ;
	while (*stack_a)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->nbr = 0;
		free(*stack_a);
		*stack_a = tmp;
	}
}
