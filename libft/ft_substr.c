/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:24:23 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/05 13:54:54 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	strs;

	i = 0;
	if (start > ft_strlen(s))
		strs = 0;
	else if (ft_strlen(s) - start > len)
		strs = len;
	else
		strs = ft_strlen(s) - start;
	substring = (char *)malloc(strs * sizeof(char));
	if (substring)
		ft_strlcpy(substring, s + start, strs + 1);
	return (substring);
}
