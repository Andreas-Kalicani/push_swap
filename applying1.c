/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applying1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:20:13 by akalican          #+#    #+#             */
/*   Updated: 2024/03/18 18:51:05 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_apply_rarb(t_stacks **a, t_stacks **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c && ft_find_place_b(*b, c) > 0)
			rotate(a, b, c);
		while ((*a)->nbr != c)
			rotate_a(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rotate_b(b, 0);
		push_a_to_b(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != c && ft_find_place_a(*a, c) > 0)
			rotate(a, b, 0);
		while ((*b)->nbr != c)
			rotate_b(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			rotate_a(a, 0);
		push_b_to_a(a, b, 0);
	}
	return (-1);
}

// This function rotate both stack_a and stack_b in the
// reverse direction as required amount.
int	ft_apply_rrarrb(t_stacks **a, t_stacks **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c && ft_find_place_b(*b, c) > 0)
			ft_rev_rotate(a, b, 0);
		while ((*a)->nbr != c)
			rev_rotate_a(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rev_rotate_b(b, 0);
		push_a_to_b(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != c && ft_find_place_a(*a, c) > 0)
			ft_rev_rotate(a, b, 0);
		while ((*b)->nbr != c)
			rev_rotate_b(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			rev_rotate_a(a, 0);
		push_b_to_a(a, b, 0);
	}
	return (-1);
}

// This function rotate the stack_a in reverse direction,
// the stack_b in oppsite direction of stack_a as required amount.
int	ft_apply_rrarb(t_stacks **a, t_stacks **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c)
			rev_rotate_a(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rotate_b(b, 0);
		push_a_to_b(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			rev_rotate_a(a, 0);
		while ((*b)->nbr != c)
			rotate_b(b, 0);
		push_b_to_a(a, b, 0);
	}
	return (-1);
}

// This function rotate the stack_b in reverse direction,
// the stack_a in oppsite direction of stack_a as required amount.
int	ft_apply_rarrb(t_stacks **a, t_stacks **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c)
			rotate_a(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rev_rotate_b(b, 0);
		push_a_to_b(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			rotate_a(a, 0);
		while ((*b)->nbr != c)
			rev_rotate_b(b, 0);
		push_b_to_a(a, b, 0);
	}
	return (-1);
}