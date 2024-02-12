/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:06:07 by akalican          #+#    #+#             */
/*   Updated: 2024/02/12 18:40:19 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_stacks
{
	struct t_stack_node_a	*head_a;
	struct t_stack_node_b	*head_b;
	struct t_move			*moves;
	struct t_cheap			*cheap;
}						t_stacks;



typedef struct s_stack_node_a

{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node_a	*next;
	struct s_stack_node_a	*prev;

}						t_stack_node_a;

typedef struct s_stack_node

{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;

}						t_stack_node_b;


typedef struct s_values
{
	int					max_a;
	int					min_a;
	int					max_b;
	int					min_b;
}						t_values;

typedef struct s_move
{
	int	cost;
	int sa;
	int sb;
	int ss;
	int pa;
	int pb;
	int rr;
	int ra;
	int rb;
	int rra;
	int rrb;
}						t_move;

typedef struct s_cheap
{
	int					cost;
	int					sa;
	int					sb;
	int					ss;
	int					pa;
	int					pb;
	int					ra;
	int					rb;
	int					rr;
	int					rra;
	int					rrb;
	int					rrr;
}						t_cheap;

/*linked_list_a*/

t_stack_node_a			*create_stack_a(int val);
int						stack_size_a(t_stack_node_a *stack_a);
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
int						ft_isdigit(int c);
size_t					ft_strlen(const char *s);

/*utils_2.c*/
long					ft_atol(const char *npoint);
void					ft_putstr_fd(char *s, int fd);
void					get_top_stack_a(t_stacks *stacks, t_stack_node_a *head_a, int i);

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

/*rotate.c*/
void					rotate_a(t_stack_node_a **head_a, int print);
void					rotate_b(t_stack_node_b **head_b, int print);
void					rotate(t_stack_node_a **stack_a,
							t_stack_node_b **stack_b);

/*void    rev_rotate.c  */
void					rev_rotate_a(t_stack_node_a **bottom_a);
void					rev_rotate_b(t_stack_node_b **bottom_b);
void					rev_rotate(t_stack_node_a **stack_a,
							t_stack_node_b **stack_b);

/* check_max_min_a.c */
void					check_min_a(t_stack_node_a *stack_a);
void					check_max_a(t_stack_node_a *stack_a);
void					check_max_min_a(t_stack_node_a *stack_a);
int 					check_max_a_nbr(t_stack_node_a *stack_a);
int 					check_min_a_nbr(t_stack_node_a *stack_a);

/* check_max_min_b.c */
void					check_max_min_b(t_stack_node_b *stack_b);
void					check_min_b(t_stack_node_b *stack_b);
void					check_max_b(t_stack_node_b *stack_b);
int 					check_max_b_nbr(t_stack_node_b *stack_b);
int 					check_min_b_nbr(t_stack_node_b *stack_b);

/*input_error.c*/
void					print_error_exit(void);
void					check_size_int(int argc, char **argv);
void					check_for_doubles(t_stack_node_a *stack_a);
void					check_int(int argc, char **argv);
void					input_error(int argc, char **argv);

/* utils3.c */
t_stack_node_a			*ft_lstlast_a(t_stack_node_a *lst);
t_stack_node_b			*ft_lstlast_b(t_stack_node_b *lst);
int						ft_find_place_a(t_stack_node_a *head_a, int push_of_nbr);
int 					ft_find_place_b(t_stack_node_b *head_b, int nbr_of_push);
/* utils4.c*/
int						ft_find_index_a(t_stack_node_a *stack_a, int nbr);
int 					ft_find_index_b(t_stack_node_b *stack_b, int nbr);

/* utils5.c */
int						ft_isdigit(int c);
int 					ft_atoi2(const char *str);

/* split.c */
static int				count_words(const char *str, char c);
static char				*word_dup(const char *str, int start, int finish);
char					**ft_split(char const *s, char c);

/* ft_add_node_back.c */
void    				ft_add_back_b(t_stack_node_b **stack_b, int val);
void 					ft_add_back_a(t_stack_node_a **stack_a, int val);

/*void	ft_parse_arg */
void					ft_freestr(char **lst);

/* ft_checkedsorted.c */
int 					ft_checksorted(t_stack_node_a *stack_a);
#endif