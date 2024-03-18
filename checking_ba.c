/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ba.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:39:51 by akalican          #+#    #+#             */
/*   Updated: 2024/03/18 20:54:56 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

// This function calculates the required amount of rotation.
// Calculations are done for ra+rb case.
int	ft_check_rarb_a(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = ft_find_place_a(stack_a, c);
	if (i < ft_find_index(stack_b, c))
		i = ft_find_index(stack_b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rrb case.
int	ft_check_rrarrb_a(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_place_a(stack_a, c);
	if ((i < (ft_lstsize(stack_b) - ft_find_index(stack_b, c))) && ft_find_index(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_index(stack_b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for ra+rrb case.
int	ft_check_rarrb_a(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_index(stack_b, c);
	i = ft_find_place_a(stack_a, c) + i;
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rb case.
int	ft_check_rrarb_a(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_place_a(stack_a, c);
	i = ft_find_index(stack_b, c) + i;
	return (i);
}