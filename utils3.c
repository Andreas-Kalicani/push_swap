/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:06:08 by akalican          #+#    #+#             */
/*   Updated: 2024/02/12 14:39:14 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"


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

int ft_find_place_b(t_stack_node_b *head_b, int nbr_of_push)
{
    int i;
    t_stack_node_b *tmp;

    i = 1;
    if(nbr_of_push > head_b->nbr && nbr_of_push < ft_lstlast_b(head_b)->nbr)
        i = 0;
    else if (nbr_of_push > check_max_b_nbr(head_b) || nbr_of_push < check_min_b_nbr(head_b))
        i = ft_find_index_b(head_b, check_max_b_nbr(head_b));
	else 
	{
		tmp = head_b->next;
		while (head_b->nbr < nbr_of_push || tmp->nbr > nbr_of_push)
		{
			head_b = head_b->next;
			tmp = head_b->next;
			i++;
		}
	}
	return (i);
}

int ft_find_place_a(t_stack_node_a *head_a, int push_of_nbr)
{
    int i = 1;
    t_stack_node_a *tmp;

    if (head_a == NULL) 
        return (0);

    if (push_of_nbr > head_a->nbr && push_of_nbr > ft_lstlast_a(head_a)->nbr)
        i = 0;
    else if (push_of_nbr > check_max_a_nbr(head_a) || push_of_nbr < check_min_a_nbr(head_a))
        i = ft_find_index_a(head_a, check_min_a_nbr(head_a));
    else {
        tmp = head_a->next;
        while (tmp != NULL && (head_a->nbr > push_of_nbr || tmp->nbr < push_of_nbr))
        {
			head_a = head_a->next;
			tmp = head_a->next;
			i++;
        }
    }
    return i;
}