/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:17:06 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/17 12:51:43 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack	**stackoriginal, int number)
{
	t_stack *stack = (t_stack *)malloc(sizeof(t_stack *));
	if(!stack)
		return ;
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
}
void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, (*stack_b)->num);
	*stack_b = (*stack_b) -> next;
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, (*stack_a)->num);
	*stack_a = (*stack_a) -> next;
	write(1, "pb\n", 3);
}
