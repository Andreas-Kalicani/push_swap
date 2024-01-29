/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:45:05 by akalican          #+#    #+#             */
/*   Updated: 2024/01/29 10:11:14 by akalican         ###   ########.fr       */
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

void	check_for_doubles(t_stack_node_a *stack_a)
{
	t_stack_node_a	*current_node;
	t_stack_node_a	*compare_node;

	current_node = stack_a;
	while (current_node != NULL)
	{
		compare_node = current_node->next;
		while (compare_node != NULL)
		{
			if (current_node->nbr == compare_node->nbr)
			{
				ft_putstr_fd("Error: duplicated values\n", 2);
				clear_nodes(stack_a);
				exit(0);
			}
			compare_node = compare_node->next;
		}
		current_node = current_node->next;
	}
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
