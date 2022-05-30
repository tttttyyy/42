/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:49:09 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/15 13:14:04 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	int	i;
	t_stack	*temp;

	temp = *stack;
	while (temp -> next -> next)
		temp = temp -> next;
	i = temp -> next -> num;
	temp -> next = NULL;
	push(stack, i);
}
//321 132
void	rra(t_stack **stack_a)
{
	if(*stack_a && (*stack_a) -> next)
	{
		reverse_rotate(stack_a);
		write(1, "rra\n", 4);
	}
}

void	rrb(t_stack **stack_b)
{
	if(*stack_b && (*stack_b) -> next)
	{
		reverse_rotate(stack_b);
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if(*stack_a && (*stack_a) -> next && *stack_b && (*stack_b) -> next)
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		write(1, "rrr\n", 4);
	}
}
