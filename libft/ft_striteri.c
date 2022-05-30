/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:42:02 by tyenokya          #+#    #+#             */
/*   Updated: 2022/03/24 17:21:25 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(s);
	if (s != NULL)
	{
		while (i < l)
		{
			(*f)(i, s);
			i++;
			s++;
		}
	}
}
