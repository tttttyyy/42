/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <tyenokya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:16:25 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/30 14:33:16 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_by_args(t_stack **stacka, t_stack **stackb, int i)
{
	if(!stacka || !stackb)
		return;
	if(i == 1)
	{
		return;
	}
	else if(i == 2)
	{
		sort2(stacka);
	}
	else if(i == 3)
	{
		sort3(stacka);
	}
	else if(i == 4)
        sort4(stacka, stackb);
	else if(i == 5)
		sort5(stacka, stackb);
	else
		sortoriginal(stacka, stackb, i);
}