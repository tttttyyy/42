/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:04:36 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/10 16:48:23 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_putnbr(int ap)
{
	long	l;

	l = ap;
	if (l < 0)
	{
		ft_putchar('-');
		l *= -1;
	}
	if (l >= 10)
		ft_putnbr(l / 10);
	ft_putchar('0' + (l % 10));
	return (intlen(ap));
}
