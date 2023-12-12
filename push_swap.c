/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:15:50 by akalican          #+#    #+#             */
/*   Updated: 2023/12/08 14:30:19 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/libft.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[] = "hello";
    
    if (argc != 1)
    {
        while (*argv)
        {
            printf(" %s", *argv);
            argv++;
        }
        printf("%c", '\n');
    }
    return (0);
}