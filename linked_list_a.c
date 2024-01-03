/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:32:04 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/01/03 11:06:19 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}
*/
t_stack_node_a	*create_list(int argc, char **argv)
{
	int				i;
	t_stack_node_a	*stack_a;
	t_stack_node_a	*tmp;

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

t_stack_node_a	*create_stack_a(int val)
{
	t_stack_node_a	*stack_a;

	stack_a = malloc(sizeof(t_stack_node_a));
	if (!stack_a)
	{
		free(stack_a);
		return (NULL);
	}
	stack_a->nbr = val;
	stack_a->next = NULL;
	return (stack_a);
}

t_stack_node_a	*add_new_node_a(t_stack_node_a *stack_a, int val)
{
	t_stack_node_a	*new_node;

	new_node = malloc(sizeof(t_stack_node_a));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->nbr = val;
	new_node->next = stack_a;
	return (new_node);
}

int	stack_size_a(t_stack_node_a *stack_a)
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

void	clear_nodes(t_stack_node_a *stack_a)
{
	t_stack_node_a	*lst;

	while (stack_a != NULL)
	{
		lst = stack_a;
		stack_a = lst->next;
		free(lst);
	}
}
