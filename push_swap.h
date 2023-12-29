/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:06:07 by akalican          #+#    #+#             */
/*   Updated: 2023/12/28 16:14:44 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>


typedef struct s_stack_node

{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;

}						t_stack_node;

/*Utilitise*/

t_stack_node			*create_stack_a(int val);
int						stack_size(t_stack_node *stack_a);
void					clear_nodes(t_stack_node *stack_a);
t_stack_node			*add_new_node(t_stack_node *stack_a, int val);
t_stack_node			*create_list(int argc, char **argv);

#endif
