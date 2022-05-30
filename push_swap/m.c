/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:16:18 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/17 13:44:05 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "push_swap.h"

int	duplicate(long n, char **sp, int	i)
{
	while(sp[++i])
		if(n == ft_atoi(sp[i]))
			return(0);
	return(1);
}

char	**check(int argc, char **argv)
{
	char	*str;
	int		i;
	char	**sp;
	long	n;

	i = 0;
	str = "\0";
	while(++i < argc)
	{
		str = ft_strjoin(str, argv[i]);
		str = ft_strjoin(str, " ");
	}
	sp = ft_split(str, ' ');
	//i = 0;
	//while(sp[i])
	//	printf("%s", sp[i++]);
	i = -1;
	while (sp[++i])
	{
		n = ft_atoi(sp[i]);
		if(!duplicate(n, sp, i) || !ft_strisdigit(sp[i]) || n > 2147483647 || n < -2147483648) 
		{
			write(2, "Error\n", 6);
			return(0);
		}
	}
	return(sp);
}

int	main(int argc, char **argv)
{
	if(argc < 2)
		return (0);
	char	**sp;
	t_stack	**stacka;
	t_stack **stackb;
	int		i;
	int		len;
	
	i = 0;
	stacka = malloc(sizeof(t_stack **));
	*stacka = NULL;
	stackb = malloc(sizeof(t_stack **));
	*stackb = NULL;
	sp = check(argc, argv);
	if(sorted(sp) == 1)
		return(0);
	while(sp[i])
		i++;
	len = i;
	i--;
	while(i >= 0)
	{
		push(stacka, ft_atoi(sp[i]));
		//stacka = stacka -> next;
		i--;
	}
	//printf("%d", len);
	sort_by_args(stacka, stackb, len);
	print(stacka, stackb);
}
