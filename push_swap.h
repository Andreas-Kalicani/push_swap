/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:06:07 by akalican          #+#    #+#             */
/*   Updated: 2023/12/29 18:46:42 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>


typedef struct s_stack_node

{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;

}						t_stack_node_a;

typedef struct b_stack_node

{
	int				nbr;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct b_stack_node *next;
	struct b_stack_node *prev;
	
}						t_stack_node_b;

/*linked_list_a*/

t_stack_node_a			*create_stack_a(int val);
int						stack_size(t_stack_node_a *stack_a);
void					clear_nodes(t_stack_node_a *stack_a);
t_stack_node_a			*add_new_node(t_stack_node_a *stack_a, int val);
t_stack_node_a			*create_list(int argc, char **argv);

/*linked_list_b*/
t_stack_node_b  *create_newnode_b(int val);

/*utils*/
int	ft_atoi(const char *str);

#endif
