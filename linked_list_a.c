/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:32:04 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/03/05 16:24:57 by andreasgjer      ###   ########.fr       */
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
t_stacks	*create_list(int argc, char **argv)
{
	int				i;
	t_stacks	*stack_a;
	t_stacks	*tmp;

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

t_stacks	*create_stack_a(int val)
{
	t_stacks	*stack_a;

	stack_a = malloc(sizeof(t_stacks));
	if (!stack_a)
	{
		free(stack_a);
		return (NULL);
	}
	stack_a->nbr = val;
	stack_a->next = NULL;
	return (stack_a);
}

t_stacks	*add_new_node_a(t_stacks *stack_a, int val)
{
	t_stacks	*new_node;

	new_node = malloc(sizeof(t_stacks));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->nbr = val;
	new_node->next = stack_a;
	return (new_node);
}

int	stack_size(t_stacks *stack_a)
{
	ft_putstr_fd("herethere\n", 1);
	int	index;

	index = 0;
	while (stack_a)
	{
		stack_a = stack_a->next;
		index++;
	}
	ft_putstr_fd("herethere\n", 1);
	return (index);
}

void	clear_nodes(t_stacks *stack_a)
{
	t_stacks	*lst;

	while (stack_a != NULL)
	{
		lst = stack_a;
		stack_a = lst->next;
		free(lst);
	}
}
