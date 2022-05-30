/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacklen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:56:05 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/18 16:56:08 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int stacklen(t_stack **stack)
{
    t_stack *node;
    int i;

    i = 0;
    if(stack)
    {
        node = *stack;
        while(node)
        {
            i++;
            node = node -> next;
        }
    }
    printf("%d", i);
    return(i);
}