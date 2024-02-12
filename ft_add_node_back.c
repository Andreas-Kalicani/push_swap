/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:45:05 by akalican          #+#    #+#             */
/*   Updated: 2024/02/12 16:18:57 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_back_a(t_stack_node_a **stack_a, int val)
{
	if (!stack_a)
		return ;
	if (!*stack_a)
		*stack_a = val;
	else
		(ft_lstlast_a(*stack_a))->next = val;
}

void    ft_add_back_b(t_stack_node_b **stack_b, int val)
{
    	if (!stack_b)
		return (0);
	if (!*stack_b)
		*stack_b = val;
	else
		(ft_lstlast_a(*stack_b))->next = val;
}