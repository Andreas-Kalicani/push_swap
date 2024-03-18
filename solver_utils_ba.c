/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ba.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:39:51 by akalican          #+#    #+#             */
/*   Updated: 2024/03/05 23:22:41 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_a(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = ft_find_place_a(stack_a, c);
	if (i < ft_find_index(stack_b, c))
	{
		i = ft_find_index(stack_b, c);
	}
	return (i);
}

int	ft_case_rrarrb_a(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;
	ft_putstr_fd("\ncase_rrarrb_a\n", 1);
	i = 0;
	if (ft_find_place_a(stack_a, c))
	{
		ft_putstr_fd("\nin the first of case_rrarrb_a\n", 1);
		i = ft_lstsize(stack_a) - ft_find_place_a(stack_a, c);
	}
	if ((i < (ft_lstsize(stack_b) - ft_find_index(stack_b, c)))
		&& ft_find_index(stack_b, c))
		{
			ft_putstr_fd("\nin the second if of case_rrarrb_a\n", 1);
			i = ft_lstsize(stack_b) - ft_find_index(stack_b, c);
		}
	ft_putstr_fd("\nleaving case_rrarrb_a\n", 1);
	return (i);
}

int	ft_case_rarrb_a(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_index(stack_b, c);
	i = ft_find_place_a(stack_a, c) + i;
	return (i);
}

int	ft_case_rrarb_a(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_place_a(stack_a, c);
	i = ft_find_index(stack_b, c) + i;
	return (i);
}
