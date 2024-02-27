/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:51:29 by akalican          #+#    #+#             */
/*   Updated: 2024/02/27 07:53:30 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Creates new stack node with given number.
t_stack_node_a	*ft_stack_new(int content)
{
	t_stack_node_a	*new;

	new = malloc(sizeof (t_stack_node_a));
	if (!new)
		print_error_exit();
	new->nbr = content;
	new->next = NULL;
	return (new);
}