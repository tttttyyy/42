/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:35:09 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/19 16:35:12 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void    sort4(t_stack   **stack, t_stack **stackb)
{
    int min;
    int mini;

    min = findmin(stack);
    mini = findindex(stack, min);
     while((*stack)-> num != min && mini != 0)
    {
        if(mini >= 2)
            rra(stack);
        else
            ra(stack);
        mini = findindex(stack, min);
    }
    pb(stack, stackb);
    sort3(stack);
    pa(stack, stackb);
}