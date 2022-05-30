/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:44:29 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/05 13:54:06 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	size_t	i;
	size_t	s;
	size_t	box;
	size_t	store;

	box = 0;
	i = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize == 0)
		return (s);
	store = s;
	s = s + i;
	box = i;
	while (src[i - box] && dstsize - 1 > i)
	{
		dst[i] = src[i - box];
		i++;
	}
	if (i < dstsize)
		dst[i + box] = '\0';
	if (box > dstsize)
		return (store + dstsize);
	if (dstsize != 0)
		dst[i] = '\0';
	return (s);
}
