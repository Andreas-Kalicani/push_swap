/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:48:44 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/03/05 23:35:07 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_sort_b_till_3(t_stacks **stack_a, t_stacks **stack_b)
{
	int				i;
	t_stacks	*tmp;

	ft_putstr_fd("HERE3\n", 1);
	while (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
	{
		ft_putstr_fd("fucker\n", 1);
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

// seems like it doesn't sort stack_b, instead it's NULL and only sort a, need to take a look here. 
t_stacks	*ft_sort_b(t_stacks **stack_a)
{
	t_stacks	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		push_a_to_b(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		push_a_to_b(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
	{
		ft_sort_b_till_3(stack_a, &stack_b);
		print_stack_b(&stack_b);
	}
	if (!ft_checksorted(*stack_a))
		ft_sort_three(stack_a);
	printf("%p", (void *)stack_b);
	ft_putstr_fd("Something is wrong\n", 1);
	return (stack_b);
}

t_stacks	**ft_sort_a(t_stacks **stack_a, t_stacks **stack_b)
{
	int				i;
	t_stacks	*tmp;
	ft_putstr_fd("we are in sort_a\n", 1);
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
			{
				ft_putstr_fd("\n in the last else if of sort_a\n", 1);
				i = ft_apply_rrarb(stack_a, stack_b, tmp->nbr, 'b');
			}
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

// Even if stack is already sorted it swaps the two first stack on top
// Need to fix this error 
void	ft_sort(t_stacks **stack_a)
{
	t_stacks	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) == 2)
		swap_a(stack_a, 0);
	else
	{
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_find_index(*stack_a, check_min(*stack_a));
		if (i < ft_lstsize(*stack_a) - i)
		{
			while ((*stack_a)->nbr != check_min(*stack_a))
				rotate_a(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->nbr != check_min(*stack_a))
				rev_rotate_a(stack_a, 0);
		}			
	}	
}
/*
void	ft_sort(t_stack_node_a **stack_a)
{
	t_stack_node_b	*stack_b;
	int				i;

	printf("Before sorting:\n");
	print_stack_a(*stack_a);
	printf("\n");
	printf("%d", stack_size_a(*stack_a));
	if (stack_size_a(*stack_a) == 2)
		swap_a(*stack_a, 0);
	else
	{
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		ft_putstr_fd("are we here ?", 1);
		i = ft_find_index_a(*stack_a, check_min_a_nbr(*stack_a));
		if (i < stack_size_a(*stack_a) - i)
		{
			ft_putstr_fd("are we here 2 ?", 1);
			while ((*stack_a)->nbr != check_min_a_nbr(*stack_a))
				rotate_a(stack_a, 0);
		}
		else
		{
			ft_putstr_fd("are we here 2 ?", 1);
			while ((*stack_a)->nbr != check_min_a_nbr(*stack_a))
				rev_rotate_a(stack_a);
		}
	}
	printf("After sorting:\n");
	print_stack_a(*stack_a);
}
*/