/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:53:56 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/05 16:32:14 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fs(va_list *ap, char c)
{
	int	k;

	k = 0;
	if (c == 'c')
		k += ft_putchar(va_arg(*ap, int));
	else if (c == 's')
		k += ft_putstr(va_arg(*ap, char *));
	else if (c == 'p')
		k += ft_putnbr_pointer(va_arg(*ap, void *), 'x');
	else if (c == 'd')
		k += ft_putnbr(va_arg(*ap, int));
	else if (c == 'i')
		k += ft_putnbr(va_arg(*ap, int));
	else if (c == 'u')
		k += ft_putun(va_arg(*ap, unsigned int));
	else if (c == 'x')
		k += ft_putnbr_base(va_arg(*ap, unsigned int), 'x');
	else if (c == 'X')
		k += ft_putnbr_base(va_arg(*ap, unsigned int), 'X');
	else if (c == '%')
		k += ft_putchar(c);
	return (k);
}
