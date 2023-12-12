/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:06:07 by akalican          #+#    #+#             */
/*   Updated: 2023/12/08 14:02:27 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

typedef struct t_stack_a {
    int                 content;
    struct t_stack_a    *next;
}                       t_stack_a;

typedef struct t_stack_b {
    int     content;
    struct t_stack_b    *next;
}                       t_stack_b;

#endif