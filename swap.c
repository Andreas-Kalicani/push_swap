/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:11:08 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/02/26 17:22:07 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	swap_push(t_stack_node_a *stack_a, t_stack_node_b *stack_b)
{
	if (stack_a != NULL && stack_b != NULL && stack_a->next != NULL
		&& stack_b->next != NULL)
	{
		swap_a(stack_a, 0);
		swap_b(stack_b, 0);

		printf("ss\n");
	}
}

void	swap_a(t_stack_node_a *head_a, int print)
{
	int	temp;

	temp = head_a->nbr;
	head_a->nbr = head_a->next->nbr;
	head_a->next->nbr = temp;
	if (print != 0)
		printf("sa\n");
}

void	swap_b(t_stack_node_b *head_b, int print)
{
	int	temp;

	temp = head_b->nbr;
	head_b->nbr = head_b->next->nbr;
	head_b->next->nbr = temp;
	if (print != 0)
		printf("sb\n");
}
