/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:03:26 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/05 13:13:25 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*newnode;
	t_list	*box;

	if (!del || !f || !lst)
		return (NULL);
	box = NULL;
	while (lst)
	{
		newnode = ft_lstnew((*f)(lst->content));
		if (!newnode)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&box, newnode);
		lst = lst->next;
	}
	return (box);
}
