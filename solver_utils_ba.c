/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ba.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:39:51 by akalican          #+#    #+#             */
/*   Updated: 2024/02/27 16:06:37 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_a(t_stack_node_a *stack_a, t_stack_node_b *stack_b, int c)
{
	int	i;

	i = ft_find_place_a(stack_a, c);
	if (i < ft_find_index_b(&stack_b, c))
	{
		i = ft_find_index_b(&stack_b, c);
	}
	return (i);
}

int	ft_case_rrarrb_a(t_stack_node_a *stack_a, t_stack_node_b *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(stack_a, c))
		i = stack_size_a(stack_a) - ft_find_place_a(stack_a, c);
	if ((i < (stack_size_b(stack_b) - ft_find_index_b(&stack_b, c)))
		&& ft_find_place_b(&stack_b, c))
		i = stack_size_b(stack_b) - ft_find_index_b(&stack_b, c);
	return (i);
}

int	ft_case_rarrb_a(t_stack_node_a *stack_a, t_stack_node_b *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index_b(&stack_b, c))
		i = stack_size_b(stack_b) - ft_find_index_b(&stack_b, c);
	i = ft_find_place_a(stack_a, c) + i;
	return (i);
}

int ft_case_rrarb_a(t_stack_node_a *stack_a, t_stack_node_b *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(stack_a, c))
		i = stack_size_a(stack_a) - ft_find_index_a(stack_a, c);
	i = ft_find_index_b(&stack_b, c) + i;
	return (i);
}
