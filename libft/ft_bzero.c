/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:53:09 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/05 12:58:32 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*c;

	c = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*k;

	k = b;
	while (len--)
	{
		*k++ = (unsigned char)c;
	}
	ft_bzero(k, 1);
	b = k;
	return (b);
}
