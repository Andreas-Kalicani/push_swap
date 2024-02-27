/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applying1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:20:13 by akalican          #+#    #+#             */
/*   Updated: 2024/02/27 16:05:28 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_apply_rarb(t_stack_node_a **stack_a, t_stack_node_b **stack_b, int c,
		char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != c && ft_find_place_b(stack_b, c) > 0)
			rotate(stack_a, stack_b);
		while ((*stack_a)->nbr != c)
			rotate_a(stack_a, 0);
		while (ft_find_place_b(stack_b, 0) > 0)
			rotate_b(stack_b, 0);
		push_b_to_a(stack_b, stack_a);
	}
	else
	{
		while ((*stack_b)->nbr != c && ft_find_place_a(*stack_a, c) > 0)
			rev_rotate(stack_a, stack_b);
		while ((*stack_b)->nbr != c)
			rev_rotate_b(stack_b);
		while (ft_find_place_a(*stack_a, c) > 0)
			rev_rotate_a(stack_a);
		push_a_to_b(stack_a, stack_b);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_stack_node_a **stack_a, t_stack_node_b **stack_b, int c,
		char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != c && ft_find_place_a(*stack_a, c) > 0)
			rev_rotate(stack_a, stack_b);
		while ((*stack_a)->nbr != c)
			rev_rotate_a(stack_a);
		while (ft_find_place_b(stack_b, c) > 0)
			rev_rotate_b(stack_b);
		push_b_to_a(stack_b, stack_a);
	}
	else
	{
		while ((*stack_b)->nbr != c && ft_find_place_a(*stack_a, c) > 0)
			rev_rotate(stack_a, stack_b);
		while ((*stack_b)->nbr != c)
			rev_rotate_b(stack_b);
		while (ft_find_place_a(*stack_a, c) > 0)
			rev_rotate_a(stack_a);
		push_a_to_b(stack_a, stack_b);
	}
	return (-1);
}

int	ft_apply_rrarb(t_stack_node_a **stack_a, t_stack_node_b **stack_b, int c,
		char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != c)
			rev_rotate_a(stack_a);
		while (ft_find_place_b(stack_b, c) > 0)
			rotate_b(stack_b, 0);
		push_b_to_a(stack_b, stack_a);
	}
	else
	{
		while (ft_find_place_a(*stack_a, c) > 0)
			rev_rotate_a(stack_a);
		while ((*stack_b)->nbr != c)
			rotate_b(stack_b, 0);
		push_a_to_b(stack_a, stack_b);
	}
	return (-1);
}

int	ft_apply_rarrb(t_stack_node_a **stack_a, t_stack_node_b **stack_b, int c,
		char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != c)
			rotate_a(stack_a, 0);
		while (ft_find_place_b(stack_b, c) > 0)
			rev_rotate_b(stack_b);
		push_b_to_a(stack_b, stack_a);
	}
	else
	{
		while (ft_find_index_a(*stack_a, c) > 0)
			rotate_a(stack_a, c);
		while ((*stack_b)->nbr != c)
			rev_rotate_b(stack_b);
		push_a_to_b(stack_a, stack_b);
	}
	return (-1);
}
