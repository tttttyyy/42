/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:15:57 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/19 15:15:59 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void    sort3(t_stack **stack)
{
    int e1 = (*stack) -> num;
    int e2 = (*stack) -> next -> num;
    int e3 = (*stack) -> next -> next -> num;
    /*printf("%d", e1);
    printf("%d", e2);
    printf("%d", e3);*/
    //213
    if(e1 > e2 && e1 < e3 && e2 < e3)
    {
        sa(stack);
    }
    //231
    else if(e1 < e2 && e2 > e3 && e1 > e3)
    {
        rra(stack);
    }
    //132
    else if(e1 < e2 && e2 > e3 && e1 < e3)
    {
        sa(stack);
        ra(stack);
    }
    //321
    else if(e1 > e2 && e2 > e3 && e1 > e3)
    {
        sa(stack);
        rra(stack);
    }
    //312
    else if(e1 > e2 && e2 < e3 && e1 > e3)
    {
        ra(stack);
    }
}