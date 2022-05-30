/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:02:15 by tyenokya          #+#    #+#             */
/*   Updated: 2022/03/25 16:35:18 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	l;

	l = 0;
	while (*s++)
	{
		l++;
	}
	return (l);
}

size_t	gtav(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	first(char const *s, char const *set)
{
	size_t	i;

	i = 0;
	while (gtav(set, s[i]) == 1)
	{
		i++;
	}
	return (i);
}

size_t	last(char const *s, char const *set)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while (gtav(set, s[i]) == 1 && i > 0)
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	char	*trim;
	size_t	len;

	i = 0;
	if (last(s1, set) == 0 && first(s1, set) == ft_strlen(s1))
		len = 1;
	else
		len = last(s1, set) - first(s1, set) + 1;
	trim = malloc(len);
	start = first(s1, set);
	while (i < len)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}
