/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:43:09 by akalican          #+#    #+#             */
/*   Updated: 2024/02/27 15:24:48 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"
int	ft_find_index_a(t_stack_node_a *stack_a, int nbr)
{
	int		i;

	i = 0;
	while (stack_a->nbr != nbr)
	{
		i++;
		stack_a = stack_a->next;
	}
	stack_a->index = 0;
	return (i);
}

int ft_find_index_b(t_stack_node_b **stack_b, int nbr)
{
	ft_putstr_fd("\nHere7 bitch\n", 1);
    int i;
	t_stack_node_b *tmp;
    ft_putstr_fd("\nHere7 bitch\n", 1);
    i = 0;
	tmp = *stack_b;
    while (tmp != NULL)
    {
        ft_putstr_fd("\nHere7 bitch\n", 1);
        stack_b = &tmp->next;
        i++;
    }

    // Check if the loop terminated because of finding the number or reaching the end
	
    return i;
}