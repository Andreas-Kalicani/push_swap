/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:48:44 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/02/26 16:38:58 by andreasgjer      ###   ########.fr       */
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
				i = ft_apply_rarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->nbr, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_stack_node_b	*ft_sort_b(t_stack_node_a **stack_a)
{
	t_stack_node_b	*stack_b;

	stack_b = NULL;
	if (stack_size_a(*stack_a) > 3 && !ft_checksorted(*stack_a))
		push_b_to_a(&stack_b, stack_a);
	if (stack_size_a(*stack_a) > 3 && !ft_checksorted(*stack_a))
		push_b_to_a(&stack_b, stack_a);
	if (stack_size_a(*stack_a) > 3 && !ft_checksorted(*stack_a))
		ft_sort_b_till_3(stack_a, &stack_b);
	if (!ft_checksorted(*stack_a))
		ft_sort_three(stack_a);
	return (stack_b);
}

t_stack_node_a	**ft_sort_a(t_stack_node_a **stack_a, t_stack_node_b **stack_b)
{
	int				i;
	t_stack_node_b	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rarb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->nbr, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	ft_sort(t_stack_node_a **stack_a)
{
	t_stack_node_b	*stack_b;
	int				i;

	stack_b = NULL;
	if (stack_size_a(*stack_a) == 2)
		swap_a(*stack_a, 0);
	else
	{
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_find_index_a(*stack_a, check_min_a_nbr(*stack_a));
		if (i < stack_size_a(*stack_a) - i)
		{
			while ((*stack_a)->nbr != check_min_a_nbr(*stack_a))
				rotate_a(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->nbr != check_min_a_nbr(*stack_a))
				rev_rotate_a(stack_a);
		}
	}
}
