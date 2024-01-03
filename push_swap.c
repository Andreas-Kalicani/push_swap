/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:15:50 by akalican          #+#    #+#             */
/*   Updated: 2024/01/03 11:42:44 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_stack_node_a	*stack_a;
	t_stack_node_b	*stack_b;

	stack_a = create_stack_a(6);
	stack_a = add_new_node_a(stack_a, 5);
	stack_a = add_new_node_a(stack_a, 3);
	stack_a = add_new_node_a(stack_a, 2);
	stack_a = add_new_node_a(stack_a, 1);
	stack_b = NULL;
	print_stack_a(stack_a);
	push_a_to_b(&stack_a, &stack_b);
	push_a_to_b(&stack_a, &stack_b);
	printf("Stack A:");
	print_stack_a(stack_a);
	printf("Stack B: ");
	print_stack_b(stack_b);
	print_stack_a(stack_a);
	swap_push(stack_a, stack_b);
	printf("Stack A Should be swap: ");
	print_stack_a(stack_a);
	printf("Stack B Should be swap: ");
	print_stack_b(stack_b);
	printf("\n");
	rotate_a(&stack_a, 1);
	print_stack_a(stack_a);
	rotate_b(&stack_b, 1);
	print_stack_a(stack_a);
	rotate(&stack_a, &stack_b);
	print_stack_a(stack_a);
	print_stack_b(stack_b);
	rev_rotate_a(&stack_a);
	print_stack_a(stack_a);
	rev_rotate_b(&stack_b);
	print_stack_b(stack_b);
	rev_rotate(&stack_a, &stack_b);
	print_stack_a(stack_a);
	print_stack_b(stack_b);
	printf("%ld", ft_atol("1234"));
}
