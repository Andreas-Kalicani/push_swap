/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:50:10 by akalican          #+#    #+#             */
/*   Updated: 2024/03/05 23:40:49 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	ft_putstr_fd("fucker ducker\n", 1 );
	int	i;
	i = ft_find_place_b(stack_b, c);
	ft_putstr_fd("fucker lucker\n", 1 );
	if (i < ft_find_index(stack_a, c))
	{
		i = ft_find_index(stack_a, c);
	}
	return (i);
}

int	ft_case_rrarrb(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;
	ft_putstr_fd("fucker lucker\n", 1 );
	i = 0;
	if (ft_find_place_b(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_place_b(stack_b, c);
	if ((i < (ft_lstsize(stack_a) - ft_find_index(stack_a, c)))
		&& ft_find_index(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_index(stack_a, c);
	return (i);
}

int	ft_case_rrarb(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_index(stack_a, c);
	i = ft_find_place_b(stack_b, c) + i;
	return (i);
}

int	ft_case_rarrb(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_place_b(stack_b, c);
	i = ft_find_index(stack_a, c) + i;
	return (i);
}
