/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:38:54 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/17 13:41:44 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*fillstack(t_stack **stackoriginal, int number)
{
	t_stack *stack = (t_stack *)malloc(sizeof(t_stack *));
	if(!stack)
		return (0);
	stack -> num = number;
	if(!*stackoriginal)
	{
		stack -> next = NULL;
		*stackoriginal = stack;
	}
	else
	{
		stack -> next = *stackoriginal;
		*stackoriginal = stack;
	}
	return(stack);
}
