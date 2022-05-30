/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <tyenokya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:33:56 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/28 18:33:57 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort5(t_stack   **stack, t_stack **stackb)
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
    sort4(stack, stackb);
    pa(stack, stackb);
}