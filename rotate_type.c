/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:25:31 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/02/27 16:06:10 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_ba(t_stack_node_a *stack_a, t_stack_node_b *stack_b)
{
	int				i;
	t_stack_node_b	*tmp;

	tmp = stack_b;
	i = ft_case_rrarrb_a(stack_a, stack_b, stack_b->nbr);
	while (tmp)
	{
		if (i > ft_case_rarb_a(stack_a, stack_b, tmp->nbr))
			i = ft_case_rarb_a(stack_a, stack_b, tmp->nbr);
		if (i > ft_case_rrarrb_a(stack_a, stack_b, tmp->nbr))
			i = ft_case_rrarrb_a(stack_a, stack_b, tmp->nbr);
		if (i > ft_case_rarrb_a(stack_a, stack_b, tmp->nbr))
			i = ft_case_rarrb_a(stack_a, stack_b, tmp->nbr);
		if (i > ft_case_rrarb_a(stack_a, stack_b, tmp->nbr))
			i = ft_case_rrarb_a(stack_a, stack_b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_stack_node_a *stack_a, t_stack_node_b *stack_b)
{
	ft_putstr_fd("hello fucker\n", 1 );
	int				i;
	t_stack_node_a	*tmp;

	tmp = stack_a;
	ft_putstr_fd("hello fucker again\n", 1 );
	i = ft_case_rarb(stack_a, stack_b, tmp->nbr);
	ft_putstr_fd("fucker mother cocker\n", 1 );
	ft_putstr_fd("HERE4\n", 1 );
	while (tmp)
	{
		if (i > ft_case_rarb(stack_a, stack_b, tmp->nbr))
			i = ft_case_rarb(stack_a, stack_b, tmp->nbr);
		if (i > ft_case_rrarrb(stack_a, stack_b, tmp->nbr))
			i = ft_case_rrarrb(stack_a, stack_b, tmp->nbr);
		if (i > ft_case_rarrb(stack_a, stack_b, tmp->nbr))
			i = ft_case_rarrb(stack_a, stack_b, tmp->nbr);
		if (i > ft_case_rrarb(stack_a, stack_b, tmp->nbr))
			i = ft_case_rrarb(stack_a, stack_b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}
