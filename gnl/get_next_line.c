/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:14:16 by tyenokya          #+#    #+#             */
/*   Updated: 2022/04/15 17:46:55 by tyenokya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (i < dstsize - 1 && src[i] != 0 && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (dst);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i] != 0)
		i++;
	return (i);
}

int	len(char *box)
{
	int	l;

	l = ft_strlen(box) - ft_strlen(ft_strchr(box, '\n')) + 1;
	return (l);
}

char	*myread(int fd, char *box)
{
	char	buff[BUFFER_SIZE +1];
	int		byte;

	byte = 1;
	while (1)
	{
		byte = read(fd, buff, BUFFER_SIZE);
		buff[byte] = '\0';
		if (byte == -1)
			return (NULL);
		if (!box)
			box = ft_strdup(buff);
		else
			box = ft_strjoin(box, buff);
		if (ft_strchr(buff, '\n') || byte == 0)
			break ;
	}
	return (box);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*hi;
	static char	*box = NULL;

	if (fd < 0 || fd > 65535 || BUFFER_SIZE <= 0)
		return (NULL);
	box = myread(fd, box);
	if (!box)
		return (NULL);
	line = ft_substr(box, 0, len(box));
	hi = box;
	box = ft_substr(box, len(box), ft_strlen(box) - len(box));
	free(hi);
	return (line);
}
