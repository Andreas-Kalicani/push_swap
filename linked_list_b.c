/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:53:23 by akalican          #+#    #+#             */
/*   Updated: 2024/03/05 16:25:28 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*create_list_b(int argc, char **argv)
{
	int				i;
	t_stacks	*stack_b;
	t_stacks	*tmp;

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

t_stacks	*create_newnode_b(int val)
{
	t_stacks	*stack_b;

	stack_b = malloc(sizeof(t_stacks));
	if (!stack_b)
		return (NULL);
	stack_b->nbr = val;
	stack_b->next = NULL;
	return (stack_b);
}

void	clear_node_b(t_stacks *lst_b)
{
	t_stacks	*stack_b;

	while (lst_b != NULL)
	{
		stack_b = lst_b;
		lst_b = stack_b->next;
		free(stack_b);
	}
}
