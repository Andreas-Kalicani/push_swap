/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:22:52 by akalican          #+#    #+#             */
/*   Updated: 2024/03/18 20:10:49 by akalican         ###   ########.fr       */
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
