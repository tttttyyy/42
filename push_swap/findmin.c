/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findmin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:19:19 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/19 16:19:21 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int findmin(t_stack **stack)
{
    int min;
    t_stack *a;

    a = *stack;
    min = a -> num;
    while(a)
    {
        if(min > a -> num)
            min = a -> num;
        a = a -> next;
    }
    return(min);
}