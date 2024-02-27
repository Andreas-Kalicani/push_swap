/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_min_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:21:26 by akalican          #+#    #+#             */
/*   Updated: 2024/02/26 17:11:08 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_max_min_a(t_stack_node_a *head_a)
{
	check_max_a(head_a);
	check_min_a(head_a);
}

void	check_min_a(t_stack_node_a *stack_a)
{
	int	min_value;

	if (stack_a == NULL)
		return ;
	min_value = stack_a->nbr;
	while (stack_a != NULL)
	{
		if (stack_a->nbr < min_value)
		{
			min_value = stack_a->nbr;
		}
		stack_a = stack_a->next;
	}
}

void	check_max_a(t_stack_node_a *stack_a)
{
	int	max_value;

	if (stack_a == NULL)
		return ;
	max_value = stack_a->nbr;
	while (stack_a != NULL)
	{
		if (stack_a->nbr > max_value)
		{
			max_value = stack_a->nbr;
		}
		stack_a = stack_a->next;
	}
}

int	check_max_a_nbr(t_stack_node_a *stack_a)
{
	int	max_value;

	if (stack_a == NULL)
		return (0);
	max_value = stack_a->nbr;
	while (stack_a != NULL)
	{
		if (stack_a->nbr > max_value)
		{
			max_value = stack_a->nbr;
		}
		stack_a = stack_a->next;
	}
	return (max_value);
}

int	check_min_a_nbr(t_stack_node_a *stack_a)
{
	int	min_value;

	if (stack_a == NULL)
		return (0);
	min_value = stack_a->nbr;
	while (stack_a != NULL)
	{
		if (stack_a->nbr < min_value)
		{
			min_value = stack_a->nbr;
		}
		stack_a = stack_a->next;
	}
	return (min_value);
}
