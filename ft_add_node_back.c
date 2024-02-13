/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:45:05 by akalican          #+#    #+#             */
/*   Updated: 2024/02/13 10:01:01 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_back_a(t_stack_node_a **stack_a, int val)
{
	t_stack_node_a *new_node;
	
	if (!stack_a)
		return ;
	new_node = create_stack_a(val);
	if (!new_node)
		return ;
	if (!*stack_a)
		*stack_a = new_node;
	else
	{
		t_stack_node_a *last_node;
		last_node = ft_lstlast_a(*stack_a);
		last_node->next = new_node;
	}
}

void    ft_add_back_b(t_stack_node_b **stack_b, int val)
{
	t_stack_node_b *new_node;
    if (!stack_b)
		return ;
	new_node = create_newnode_b(val);
	if (!new_node)
		return ;
	if (!*stack_b)
		*stack_b = new_node;
	else
	{
		t_stack_node_b *last_node;
		last_node = ft_lstlast_b(*stack_b);
		last_node->next = new_node;
	}
}