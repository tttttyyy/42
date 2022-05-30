/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:37:22 by tyenokya          #+#    #+#             */
/*   Updated: 2022/03/26 14:47:52 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	i = 0;
	t1 = (unsigned char *) s1;
	t2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (t1[i] == t2[i] && t1[i] && t2[i] && n - 1 > i)
		i++;
	return (t1[i] - t2[i]);
}
