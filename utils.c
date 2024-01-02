/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:30:33 by akalican          #+#    #+#             */
/*   Updated: 2024/01/01 13:24:14 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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

void	print_stack_a(t_stack_node_a *head)
{
	t_stack_node_a	*current_node;

	current_node = head;
	while (current_node != NULL)
	{
		printf("%d ", current_node->nbr);
		current_node = current_node->next;
	}
	printf("\n");
}

void	print_stack_b(t_stack_node_b *head)
{
	t_stack_node_b	*current_node;

	current_node = head;
	while (current_node != NULL)
	{
		printf("%d ", current_node->nbr);
		current_node = current_node->next;
	}
	printf("\n");
}
