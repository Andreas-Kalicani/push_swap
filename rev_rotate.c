/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:42:46 by akalican          #+#    #+#             */
/*   Updated: 2024/01/04 09:52:33 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	rev_rotate(t_stack_node_a **stack_a, t_stack_node_b **stack_b)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL && *stack_b != NULL
		&& (*stack_b)->next != NULL)
	{
		rev_rotate_a(stack_a);
		rev_rotate_b(stack_b);
		printf("rrr\n");
	}
}

void	rev_rotate_a(t_stack_node_a **bottom_a)
{
	t_stack_node_a	*current;
	t_stack_node_a	*new_head;

	if (*bottom_a == NULL && (*bottom_a)->next == NULL)
		return ;
	current = *bottom_a;
	new_head = NULL;
	while (current->next != NULL)
	{
		if (current->next->next == NULL)
			new_head = current;
		current = current->next;
	}
	current->next = *bottom_a;
	*bottom_a = new_head->next;
	new_head->next = NULL;
	printf("rra\n");
}

void	rev_rotate_b(t_stack_node_b **bottom_b)
{
	t_stack_node_b	*current;
	t_stack_node_b	*new_head_b;

	if (*bottom_b == NULL && (*bottom_b)->next == NULL)
		return ;
	current = *bottom_b;
	new_head_b = NULL;
	while (current->next != NULL)
	{
		if (current->next->next == NULL)
			new_head_b = current;
		current = current->next;
	}
	current->next = *bottom_b;
	*bottom_b = new_head_b->next;
	new_head_b->next = NULL;
	printf("rrb\n");
}
