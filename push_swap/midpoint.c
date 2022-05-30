/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midpoint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <tyenokya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:34:05 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/28 19:04:06 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int midpoint(t_stack **stack, int count)
{  
    t_stack *temp;
    int sum;
    int i;

    temp = *stack;
    sum = 0;
    i = 0;
    while(temp && i < count)
    {
        sum += temp -> num;
        i++;
        temp = temp -> next;
    }
    return(sum / count);
}