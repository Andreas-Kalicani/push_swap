/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:37:52 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/02/26 13:51:38 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack_node_a **stack_a)
{
	if (check_max_a_nbr(*stack_a) == (*stack_a)->nbr)
	{
		rev_rotate_a(*stack_a);
		swap_a(*stack_a, 0);
	}
	else if (check_max_a_nbr(*stack_a) == (*stack_a)->nbr)
	{
		rotate_a(*stack_a, 0);
		if (!ft_checksorted(*stack_a))
			swap_a(*stack_a, 0);
	}
	else
	{
		if (ft_find_index_a(*stack_a, check_max_a_nbr(*stack_a)) == 1)
			rev_rotate_a(stack_a);
		else
			swap_a(*stack_a, 0);
	}
}
