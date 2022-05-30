/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:08:38 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/10 16:51:10 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pointer(void *ap, char c)
{
	int	len;

	len = 2;
	write(1, "0x", 2);
	len += ft_putnbr_base((unsigned long)ap, c);
	return (len);
}
