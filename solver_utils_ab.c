/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:50:10 by akalican          #+#    #+#             */
/*   Updated: 2024/02/20 17:45:18 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb(t_stack_node_a *stack_a, t_stack_node_b *stack_b, int c)
{
	int	i;

	i = ft_find_place_b(stack_b, c);
	if (i < ft_find_index_a(stack_a, c))
		i = ft_find_index_a(stack_a, c);
	return (i);
}

int	ft_case_rrarrb(t_stack_node_a *stack_a, t_stack_node_b *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(stack_b, c))
		i = stack_size_b(stack_b) - ft_find_place_b(stack_b, c);
	if ((i < (stack_size_a(stack_a) - ft_find_index_a(stack_a, c)))
		&& ft_find_index_a(stack_a, c))
		i = stack_size_a(stack_a) - ft_find_index_a(stack_a, c);
	return (i);
}

int	ft_case_rrarb(t_stack_node_a *stack_a, t_stack_node_b *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index_a(stack_a, c))
		i = stack_size_a(stack_a) - ft_find_index_a(stack_a, c);
	i = ft_find_place_b(stack_b, c) + i;
	return (i);
}

int	ft_case_rarrb(t_stack_node_a *stack_a, t_stack_node_b *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(stack_b, c))
		i = stack_size_b(stack_b) - ft_find_place_b(stack_b, c);
	i = ft_find_index_a(stack_a, c) + i;
	return (i);
}
