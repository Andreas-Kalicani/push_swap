/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:06:08 by akalican          #+#    #+#             */
/*   Updated: 2024/02/27 16:06:30 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_stack_node_a	*ft_lstlast_a(t_stack_node_a *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_stack_node_b	*ft_lstlast_b(t_stack_node_b *lst)
{
	if (!lst)
		return (NULL);

	while (lst->next)
		lst = lst->next;

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
int ft_find_place_b(t_stack_node_b **head_b, int nbr_of_push)
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
    if (nbr_of_push > check_max_b_nbr(*head_b) || nbr_of_push < check_min_b_nbr(*head_b))
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

int ft_find_place_b(t_stack_node_b **head_b, int nbr_of_push)
{
    int i;
    t_stack_node_b *tmp;

    i = 1;
    tmp = *head_b;
    ft_putstr_fd("fucker here are we\n", 1);
    ft_putstr_fd("\n=====Wooooooo====\n", 1);
    print_stack_b(&tmp);
    ft_putstr_fd("\n=====Wooooooo====\n", 1);
    print_stack_b(head_b);
    ft_putstr_fd("\n=====Wooooooo====\n", 1);

    ft_putstr_fd("\n== here now ===\n", 1);

    if (nbr_of_push > check_max_b_nbr(&tmp) || nbr_of_push < check_min_b_nbr(*head_b))
    {
        ft_putstr_fd("HERE5\n", 1);
        i = ft_find_index_b(head_b, check_max_b_nbr(head_b));
    }
    else 
    {
        ft_putstr_fd("HERE6\n", 1);
        ft_putstr_fd("\nwho let the dogs out\n", 1);
    while (tmp != NULL && tmp->nbr > nbr_of_push)
{
    ft_putstr_fd("\nHere7 bitchoolo\n", 1);
    tmp = tmp->next;
    i++;
}
    }
    ft_putstr_fd("HERE5\n", 1);
    return (i);
}
int ft_find_place_a(t_stack_node_a *head_a, int push_of_nbr)
{
	int				i;
	t_stack_node_a	*tmp;

	i = 1;
	if (head_a == NULL)
		return (0);
	if (push_of_nbr > head_a->nbr && push_of_nbr > ft_lstlast_a(head_a)->nbr)
		i = 0;
	else if (push_of_nbr > check_max_a_nbr(head_a)
		|| push_of_nbr < check_min_a_nbr(head_a))
		i = ft_find_index_a(head_a, check_min_a_nbr(head_a));
	else
	{
		tmp = head_a->next;
		while (tmp != NULL && (head_a->nbr > push_of_nbr
				|| tmp->nbr < push_of_nbr))
		{
			head_a = head_a->next;
			tmp = head_a->next;
			i++;
		}
	}
	return (i);
}
