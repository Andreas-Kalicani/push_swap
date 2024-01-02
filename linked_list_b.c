/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:53:23 by akalican          #+#    #+#             */
/*   Updated: 2024/01/01 13:19:31 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node_b	*create_list_b(int argc, char **argv)
{
	int				i;
	t_stack_node_b	*stack_b;
	t_stack_node_b	*tmp;

	i = 1;
	stack_b = create_newnode_b(ft_atoi(argv[i]));
	tmp = stack_b;
	if (i++ > argc)
	{
		tmp->next = create_newnode_b(ft_atoi(argv[i]));
		tmp = tmp->next;
		tmp->next = NULL;
	}
	return (stack_b);
}

t_stack_node_b	*create_newnode_b(int val)
{
	t_stack_node_b	*stack_b;

	stack_b = malloc(sizeof(t_stack_node_b));
	if (!stack_b)
		return (NULL);
	stack_b->nbr = val;
	stack_b->next = NULL;
	return (stack_b);
}

void	clear_node_b(t_stack_node_b *lst)
{
	t_stack_node_b	*stack_b;

	while (lst != NULL)
	{
		stack_b = lst;
		lst = stack_b->next;
		free(stack_b);
	}
}

int	stack_size_b(t_stack_node_b *stack_b)
{
	int	i;

	i = 0;
	while (stack_b != NULL)
	{
		i++;
		stack_b = stack_b->next;
	}
	return (i);
}
