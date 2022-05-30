/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:08:16 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/10 16:55:02 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long ap, char c)
{
	int	l;

	l = 0;
	if (ap > 15)
		l += ft_putnbr_base(ap / 16, c);
	ap %= 16;
	if (ap >= 10 && c == 'x')
		l += ft_putchar(87 + ap);
	else if (ap >= 10 && c == 'X')
		l += ft_putchar(55 + ap);
	else if (ap < 10)
		l += ft_putchar(48 + ap);
	return (l);
}
