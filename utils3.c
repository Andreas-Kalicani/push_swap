/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:06:08 by akalican          #+#    #+#             */
/*   Updated: 2024/03/18 17:28:37 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_stacks	*ft_lstlast(t_stacks *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		/*ft_putstr_fd("\nft_lst in while\n", 1);*/
		lst = lst->next;
	}
	return (lst);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long int	t;

	t = n;
	if (t < 0)
	{
		t *= -1;
		ft_putchar_fd('-', fd);
	}
	if (t > 9)
	{
		ft_putnbr_fd((t / 10), fd);
		ft_putchar_fd((t % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((t + '0'), fd);
}

/*
int	ft_find_place_b(t_stack_node_b **head_b, int nbr_of_push)
{
	int				i;
	t_stack_node_b	*tmp;

	i = 1;
	print_stack_b(*head_b);
	print_stack_b(*head_b);
	ft_putstr_fd("\n=====Wooooooo====\n", 1 );
	ft_putstr_fd("\n=====Wooooooo====\n", 1 );
	ft_putstr_fd("\n=====Wooooooo====\n", 1 );
	tmp = *head_b;
	ft_putstr_fd("\n== here now ===\n", 1);
	if (nbr_of_push > check_max_b_nbr(*head_b)
		|| nbr_of_push < check_min_b_nbr(*head_b))
	{
		ft_putstr_fd("HERE5\n", 1 );
		i = ft_find_index_b(*head_b, check_max_b_nbr(*head_b));
	}
	else
	{
		ft_putstr_fd("HERE5\n", 1 );
		tmp = tmp->next;
		while (tmp->nbr < nbr_of_push || tmp->nbr > nbr_of_push)
		{
			tmp = *head_b;
			tmp = tmp->next;
			i++;
		}
	}
	ft_putstr_fd("HERE5\n", 1 );
	return (i);
}
*/

int	ft_find_place_b(t_stacks *stack_b, int nbr_push)
{
	int			i;
	t_stacks	*tmp;
	i = 1;
	if (nbr_push > stack_b->nbr && nbr_push < ft_lstlast(stack_b)->nbr)
		i = 0;
	else if (nbr_push > check_max(stack_b) || nbr_push < check_min(stack_b))
		i = ft_find_index(stack_b, check_max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->nbr < nbr_push || tmp->nbr > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_stacks *stack_a, int nbr_push)
{
	int 		i;
	t_stacks *tmp;

	i = 1;
	if (nbr_push < stack_a->nbr && nbr_push > ft_lstlast(stack_a)->nbr)
	{
		i = 0;
	}
	else if (nbr_push > check_max(stack_a) || nbr_push < check_min(stack_a))
		i = ft_find_index(stack_a, check_min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->nbr > nbr_push || tmp->nbr < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}