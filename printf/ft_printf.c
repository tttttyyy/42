/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:30:43 by tyenokya          #+#    #+#             */
/*   Updated: 2022/05/05 16:26:43 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	va_list	ap;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start (ap, f);
	while (*f && f[i] != '\0')
	{
		if (f[i] == '%')
		{
			i++;
			j += fs(&ap, f[i]);
			i++;
			continue ;
		}
		j += ft_putchar(f[i]);
		i++;
	}
	va_end (ap);
	return (j);
}
