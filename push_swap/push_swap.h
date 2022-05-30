/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <tyenokya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:54:22 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/30 14:35:19 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct	s_stack
{
	int				num;
	struct s_stack	*next;
}					t_stack;

void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		sort_by_args(t_stack **stacka, t_stack **stackb, int	i);
void    	sort2(t_stack **stack);
void		sort3(t_stack **stack);
void		sort4(t_stack **stacka, t_stack **stackb);
void		sort5(t_stack **stack, t_stack **stackb);
void		sortoriginal(t_stack **a, t_stack **b, int count);
char		**ft_split(char *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
long int	ft_atoi(const char *str);
void		*fillstack(t_stack **stackoriginal, int number);
size_t		ft_strlen(const char *s);
int			findindex(t_stack **stack, int n);
int			findmin(t_stack **stack);
int			sorted(char **sp);
int    		sortedstack(t_stack **stack);
int			stacklen(t_stack **stack);
int 		ft_strisdigit(char *s);
t_stack 	*createnenode(void);
char    	*ft_strdup(const char *s1);
int			midpoint(t_stack **stack, int count);
void	push(t_stack **stackoriginal, int number);
void print(t_stack **a, t_stack **b);
#endif
