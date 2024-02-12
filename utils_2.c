/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:22:52 by akalican          #+#    #+#             */
/*   Updated: 2024/02/12 14:22:28 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
long	ft_atol(const char *npoint)
{
	long				i;
	long				sign;
	unsigned long int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (npoint[i] == 32 || (npoint[i] >= 9 && npoint[i] <= 13))
		i++;
	if (npoint[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (npoint[i] == '+')
		i++;
	while (ft_isdigit(npoint[i]))
	{
		res *= 10;
		res = res + (npoint[i] - '0');
		i++;
	}
	return (res * sign);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
void	get_top_stack_a(t_stacks *stacks, t_stack_node_a *head_a, int i)
{ 
	int	size;

	stacks->moves->pb = 1;
	stacks->moves->ra = 0;
	stacks->moves->rra = 0;
	if (stacks->head_a->nbr == head_a->nbr)
		return ;
	size = stack_size_a(stacks->head_a);
	if (size % 2 == 0)
	{
		if (i + 1 > size / 2)
			stacks->moves->rra = (size - i);
		else
			stacks->moves->ra = i;
	}
	else
	{
		if (i > size / 2)
			stacks->moves->rra = (size - i);
		else
			stacks->moves->ra = i;
	}

	printf("pb: %d, ra: %d, rra: %d\n", stacks->moves->pb, stacks->moves->ra, stacks->moves->rra);
} 
*/