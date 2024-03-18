/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:45:05 by akalican          #+#    #+#             */
/*   Updated: 2024/03/05 22:53:05 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	input_error(int argc, char **argv)
{
	if (argc == 1)
		exit(0);
	check_int(argc, argv);
	check_size_int(argc, argv);
}

void	check_size_int(int argc, char **argv)
{
	long	num;
	int		i;

	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		if (num > INTMAX_MAX || num < INTMAX_MIN)
			print_error_exit();
		i++;
	}
}

void	print_error_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

int	ft_checkdup(t_stacks *a)
{
	t_stacks	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->nbr == tmp->nbr)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

void	check_int(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '\0')
			print_error_exit();
		while (j < (int)ft_strlen(argv[i]))
		{
			if (!ft_isdigit(argv[i][j]))
			{
				if (j == 0 && ft_strlen(argv[i]) != 1 && (argv[i][j] == '-'
						|| argv[i][j] == '+'))
				{
					j++;
					continue ;
				}
				print_error_exit();
			}
			j++;
		}
		i++;
	}
}
