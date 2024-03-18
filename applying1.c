/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applying1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:20:13 by akalican          #+#    #+#             */
/*   Updated: 2024/03/05 23:19:20 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_apply_rarb(t_stacks **stack_a, t_stacks **stack_b, int c, char s)
{
	ft_putstr_fd("\napply rarb\n", 1);
	if (s == 'a')
	{
		ft_putstr_fd("\napply rarb\n", 1);
		while ((*stack_a)->nbr != c && ft_find_place_b(*stack_b, c) > 0)
			rotate(stack_a, stack_b, 0);
		while ((*stack_a)->nbr != c)
			rotate_a(stack_a, 0);
		while (ft_find_place_b(*stack_b, 0) > 0)
			rotate_b(stack_b, 0);
		push_a_to_b(stack_a, stack_b, 0);
	}
	else
	{
		while ((*stack_b)->nbr != c && ft_find_place_a(*stack_a, c) > 0)
			rotate(stack_a, stack_b, 0);
		while ((*stack_b)->nbr != c)
			rotate_b(stack_b, 0);
		while (ft_find_place_a(*stack_a, c) > 0)
			rotate_a(stack_a, 0);
		push_b_to_a(stack_b, stack_a, 0);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_stacks **stack_a, t_stacks **stack_b, int c, char s)
{
	ft_putstr_fd("\n rrarrb apply\n", 1);
	if (s == 'a')
	{
		while ((*stack_a)->nbr != c && ft_find_place_a(*stack_a, c) > 0)
			ft_rrr(stack_a, stack_b, 0);
		while ((*stack_a)->nbr != c)
			rev_rotate_a(stack_a, 0);
		while (ft_find_place_b(*stack_b, c) > 0)
			rev_rotate_b(stack_b, 0);
		push_a_to_b(stack_a, stack_b, 0);
	}
	else
	{
		while ((*stack_b)->nbr != c && ft_find_place_a(*stack_a, c) > 0)
			ft_rrr(stack_a, stack_b, 0);
		while ((*stack_b)->nbr != c)
			rev_rotate_b(stack_b, 0);
		while (ft_find_place_a(*stack_a, c) > 0)
			rev_rotate_a(stack_a, 0);
		push_b_to_a(stack_b, stack_a, 0);
	}
	return (-1);
}

int	ft_apply_rrarb(t_stacks **stack_a, t_stacks **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != c)
			rev_rotate_a(stack_a, 0);
		while (ft_find_place_b(*stack_b, c) > 0)
			rotate_b(stack_b, 0);
		push_a_to_b(stack_a, stack_b, 0);
	}
	else
	{
		while (ft_find_place_a(*stack_a, c) > 0)
			rev_rotate_a(stack_a, 0);
		while ((*stack_b)->nbr != c)
			rotate_b(stack_b, 0);
		push_b_to_a(stack_b, stack_a, 0);
	}
	return (-1);
}

int	ft_apply_rarrb(t_stacks **stack_a, t_stacks **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != c)
			rotate_a(stack_a, 0);
		while (ft_find_place_b(*stack_b, c) > 0)
			rev_rotate_b(stack_b, 0);
		push_a_to_b(stack_a, stack_b, 0);
	}
	else
	{
		while (ft_find_index(*stack_a, c) > 0)
			rotate_a(stack_a, 0);
		while ((*stack_b)->nbr != c)
			rev_rotate_b(stack_b, 0);
		push_b_to_a(stack_b, stack_a, 0);
	}
	return (-1);
}
