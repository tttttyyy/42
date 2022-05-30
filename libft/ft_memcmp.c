/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:55:10 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/05 13:14:47 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (n == 0)
		return (0);
	s = (unsigned char *)s1;
	d = (unsigned char *)s2;
	while ((*s == *d) && n - 1 > 0)
	{
		s++;
		d++;
		n--;
	}
	return (*s - *d);
}
