/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:15:57 by natferna          #+#    #+#             */
/*   Updated: 2024/12/06 14:37:44 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_pointer(char **ptr)
{
	if (*ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

char	*get_line(char **remainder)
{
	char	*line;
	char	*temp;
	size_t	len;

	if (!(*remainder))
		return (NULL);
	temp = ft_strchr(*remainder, '\n');
	if (temp)
	{
		len = temp - *remainder + 1;
		line = ft_strndup(*remainder, len);
		temp = ft_strdup(temp + 1);
		free_pointer(remainder);
		*remainder = temp;
		if (**remainder == '\0')
			free_pointer(remainder);
		return (line);
	}
	line = ft_strdup(*remainder);
	free_pointer(remainder);
	return (line);
}

static int	read_and_store(int fd, char **remainder)
{
	char	*buf;
	int		read_bytes;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (-1);
	read_bytes = read(fd, buf, BUFFER_SIZE);
	while (read_bytes > 0)
	{
		buf[read_bytes] = '\0';
		if (*remainder)
			*remainder = ft_strjoin(*remainder, buf);
		else
			*remainder = ft_strdup(buf);
		if (!*remainder || ft_strchr(*remainder, '\n'))
			break ;
		read_bytes = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	return (read_bytes);
}

char	*get_next_line(int fd)
{
	static char	*remainder[MAX_FD];
	int			read_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_bytes = read_and_store(fd, &remainder[fd]);
	if (read_bytes == -1)
	{
		free_pointer(&remainder[fd]);
		return (NULL);
	}
	if (read_bytes == 0 && !remainder[fd])
		return (NULL);
	return (get_line(&remainder[fd]));
}
