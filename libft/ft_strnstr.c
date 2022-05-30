/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:44:16 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/05 13:54:31 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && needle[n] && len > i)
	{
		if (!*haystack && !*needle)
			return (NULL);
		n = 0;
		while (haystack[i + n] == needle[n] && len > i + n)
		{
			n++;
			if (!needle[n])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
