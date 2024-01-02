/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:06:07 by akalican          #+#    #+#             */
/*   Updated: 2024/01/01 13:25:43 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
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

}						t_stack_node_a;

typedef struct b_stack_node

{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct b_stack_node	*next;
	struct b_stack_node	*prev;

}						t_stack_node_b;

/*linked_list_a*/

t_stack_node_a			*create_stack_a(int val);
int						stack_size(t_stack_node_a *stack_a);
void					clear_nodes(t_stack_node_a *stack_a);
t_stack_node_a			*add_new_node_a(t_stack_node_a *stack_a, int val);
t_stack_node_a			*create_list(int argc, char **argv);

/*linked_list_b*/
t_stack_node_b			*create_list_b(int argc, char **argv);
t_stack_node_b			*create_newnode_b(int val);
void					clear_node_b(t_stack_node_b *lst);
int						stack_size_b(t_stack_node_b *stack_b);

/*utils*/
int						ft_atoi(const char *str);
void					print_stack_a(t_stack_node_a *head);
void					print_stack_b(t_stack_node_b *head);

/*push_a_to_b*/
void					push_a_to_b(t_stack_node_a **stack_a,
							t_stack_node_b **stack_b);

/*push_b_to_a*/
void					push_b_to_a(t_stack_node_b **stack_b,
							t_stack_node_a **stack_a);

/*swap.c*/
void					swap_a(t_stack_node_a *head_a, int print);
void					swap_b(t_stack_node_b *head_b, int print);
void					swap_push(t_stack_node_a *stack_a,
							t_stack_node_b *stack_b);

#endif
