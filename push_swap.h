/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:06:07 by akalican          #+#    #+#             */
/*   Updated: 2023/12/29 20:41:08 by akalican         ###   ########.fr       */
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
t_stack_node_a			*add_new_node_a(t_stack_node_a *stack_a, int val);
t_stack_node_a			*create_list(int argc, char **argv);

/*linked_list_b*/
t_stack_node_b  *create_list_b(int argc, char **argv);
t_stack_node_b  *create_newnode_b(int val);
void    clear_node_b(t_stack_node_b *lst);
int     stack_size_b(t_stack_node_b *stack_b);

/*utils*/
int	ft_atoi(const char *str);
void print_stack_a(t_stack_node_a *head);
void print_stack_b(t_stack_node_b *head);

/*push_a_to_b*/
void    push_a_to_b(t_stack_node_a **stack_a, t_stack_node_b **stack_b);

#endif
