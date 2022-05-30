/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortoriginal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <tyenokya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:26:16 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/30 16:29:05 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sortoriginal(t_stack **a, t_stack **b, int count)
{
    int i;
    int mid;
    
    i = -1;
    mid = midpoint(a, count);
    while(++i < 1)
    {
        if((*a)-> num < mid)
            pb(a, b);
        else
            ra(a);

    }
}