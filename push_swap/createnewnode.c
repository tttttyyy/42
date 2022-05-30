/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createnewnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:38:14 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/15 13:51:17 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*createnenode(void)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	node->num = 0;
	node->next = NULL;
	return(node);
}
