/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:04:36 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/10 16:38:13 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
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
}*/

int	ft_putun(unsigned int ap)
{
	int	l;

	l = 0;
	if (ap < 0)
	{
		l += ft_putchar('-');
		ap *= -1;
	}
	if (ap >= 10)
		l += ft_putnbr(ap / 10);
	l += ft_putchar('0' + (ap % 10));
	return (l);
}
