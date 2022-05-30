/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:36:37 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/15 13:28:08 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	int	i;
	t_stack	*temp;

	temp = (*stack) -> next;
	i = (*stack) -> num;
	while(temp -> next)
		temp = temp -> next;
	t_stack	*new = malloc(sizeof(t_stack *));
	if(!new)
		return ;
	new -> num = i;
	new -> next = NULL;	
	temp -> next = new;
}

void	ra(t_stack **stack_a)
{
	if(*stack_a && (*stack_a) -> next)
	{
		rotate(stack_a);
		write(1, "ra\n", 3);
	}
}
void	rb(t_stack **stack_b)
{
	if(*stack_b && (*stack_b) -> next)
	{
		rotate(stack_b);
		write(1, "rb\n", 3);
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if(*stack_a && (*stack_a) -> next && *stack_b && (*stack_b) -> next)
	{
		rotate(stack_a);
		rotate(stack_b);
		write(1, "rb\n", 3);
	}
}
