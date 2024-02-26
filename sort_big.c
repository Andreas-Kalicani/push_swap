/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:48:44 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/02/26 12:49:09 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_b_till_3(t_stack_node_a **stack_a, t_stack_node_b **stack_b)
{
	int				i;
	t_stack_node_a	*tmp;

	while (stack_size_a(*stack_a) > 3 && !ft_checksorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rarb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rarrb(stack_a, *stack_b, tmp->nbr, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarb(stack_a, *stack_b, tmp->nbr, 'a');
			else
				tmp = tmp->next;
		}
	}
}


t_stack_node_b *ft_sort_b(t_stack_node_a **stack_a)
{
    t_stack_node_b *stack_b;

    stack_b = NULL;
    if (stack_size_a(*stack_a) > 3 && !ft_checksorted(*stack_a))
        push_b_to_a(&stack_b, stack_a);
    if (stack_size_a(*stack_a) > 3 && !ft_checksorted(*stack_a))
        push_b_to_a(&stack_b, stack_a);
    if (stack_size_a(*stack_a) > 3 && !ft_checksorted(*stack_a))
        ft_sort_b_till_3(stack_a, &stack_b);
    if (!ft_checksorted(*stack_a))
        
}