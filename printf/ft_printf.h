/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:12:31 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/10 16:47:38 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		fs(va_list *ap, char c);
int		ft_printf(const char *f, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int ap);
int		ft_putnbr_base(unsigned long ap, char c);
int		ft_putnbr_pointer(void *ap, char c);
int		ft_putun(unsigned int ap);

#endif
