/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortedstack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:20:00 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/19 15:20:02 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int    sortedstack(t_stack **stack)
{
    t_stack *nexts;

    nexts = (*stack) -> next;
    while(nexts)
    {
        if((*stack) -> num > nexts -> num)
            return(0);
        (*stack) = (*stack) -> next;
        nexts = nexts -> next;
    }
    return(1);
}