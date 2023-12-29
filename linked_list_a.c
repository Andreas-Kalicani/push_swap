/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:32:04 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/12/29 17:13:54 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_stack_node	*create_list(int argc, char **argv)
{
	int				i;
	t_stack_node	*stack_a;
	t_stack_node	*tmp;

	i = 1;
	stack_a = create_stack_a(ft_atoi(argv[i]));
	tmp = stack_a;
	while (i++ > argc)
	{
		tmp->next = create_stack_a(ft_atoi(argv[i]));
		tmp = tmp->next;
		tmp->next = NULL;
	}

	return (stack_a);
}

t_stack_node	*create_stack_a(int val)
{
	t_stack_node	*stack_a;

	stack_a = malloc(sizeof(t_stack_node));
	if (!stack_a)
	{
		free(stack_a);
		return (NULL);
	}
	stack_a->nbr = val;
	stack_a->next = NULL;
	return (stack_a);
}

t_stack_node	*add_new_node(t_stack_node *stack_a, int val)
{
	t_stack_node	*new_node;

	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->nbr = val;
	new_node->next = stack_a;
	return (new_node);
}

int	stack_size(t_stack_node *stack_a)
{
	int	index;

	index = 0;
	while (stack_a)
	{
		index++;
		stack_a = stack_a->next;
	}
	return (index);
}

void	clear_nodes(t_stack_node *stack_a)
{
	t_stack_node	*lst;

	while (stack_a != NULL)
	{
		lst = stack_a;
		stack_a = lst->next;
		free(lst);
	}
}
