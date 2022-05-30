/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:29:27 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/19 16:29:29 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int findindex(t_stack **stack, int n)
{
    int i;
    t_stack *a;

    a = *stack;
    i = 0;
    while(a -> next)
    {
        if(a -> num == n)
            return(i);
        else
            i++;
        a = a -> next;
    }
    return(i);
}