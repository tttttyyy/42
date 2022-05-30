/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:53:02 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/15 17:45:51 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *s1)
{
	char	*dest;

	dest = malloc(ft_strlen(s1) + 1);
	if (!dest || !s1)
		return (NULL);
	ft_strcpy(dest, s1);
	return (dest);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)(s + i));
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ns;
	size_t	i;
	size_t	k;

	i = 0;
	ns = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ns)
		return (NULL);
	while (s1[i] != '\0')
	{
		ns[i] = s1[i];
		i++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		ns[i] = s2[k];
		k++;
		i++;
	}
	ns[i] = '\0';
	if (s1)
		free(s1);
	return (ns);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	strs;

	i = 0;
	if (!*s || !s)
		return (NULL);
	if (start > ft_strlen(s))
		strs = 0;
	else if (ft_strlen(s) - start > len)
		strs = len;
	else
		strs = ft_strlen(s) - start;
	substring = (char *)malloc((strs + 1) * sizeof(char));
	if (!substring)
		return (0);
	if (substring)
		ft_strlcpy(substring, s + start, strs + 1);
	return (substring);
}
