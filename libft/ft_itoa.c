/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:23:10 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/05 13:01:16 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	intlen(int n)
{
	long	l;
	size_t	len;

	len = 0;
	l = n;
	if (l < 0)
		len = 1;
	else if (n == 0)
		len = 1;
	while (l)
	{
		l /= 10;
		len++;
		if (l == 0)
			break ;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	l;
	size_t	len;
	char	*str;

	l = n;
	len = intlen(n);
	str = malloc(len + 1);
	if (l < 0)
	{
		str[0] = '-';
		l = -l;
	}
	else if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	while (l)
	{
		str[len - 1] = (l % 10) + 48;
		l /= 10;
		len--;
		if (l == 0)
			break ;
	}
	return (str);
}
