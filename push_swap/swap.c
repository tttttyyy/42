/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:04:42 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/15 13:13:46 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*temp;
	int		i;
	
	temp = *stack;
	if (temp -> next)
	{
		i = temp -> num;
		temp -> num = temp -> next -> num;
		temp -> next -> num = i;
	}
}

void	sa(t_stack **stack_a)
{
	if(*stack_a && (*stack_a) -> next)
	{
		swap(stack_a);
		write(1, "sa\n", 3);
	}
}

void	sb(t_stack **stack_b)
{
	if(*stack_b && (*stack_b) -> next)
	{
		swap(stack_b);
		write(1, "sb\n", 3);
	}
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if(*stack_a && (*stack_a) -> next && *stack_b && (*stack_b) -> next)
	{
		swap(stack_a);
		swap(stack_b);
		write(1, "ss\n", 3);
	}
}
