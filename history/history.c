/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   history.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:32:16 by natferna          #+#    #+#             */
/*   Updated: 2025/05/20 21:09:21 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	update_history_capacity(t_history *hist)
{
	size_t	i;
	int		new_capacity;
	char	**new_entries;

	new_capacity = hist->capacity * 2;
	new_entries = malloc(sizeof(char *) * new_capacity);
	if (!new_entries)
		return ;
	i = 0;
	while (i < hist->count)
	{
		new_entries[i] = hist->entries[i];
		i++;
	}
	free(hist->entries);
	hist->entries = new_entries;
	hist->capacity = new_capacity;
}

void	history_add(t_history *hist, const char *entry)
{
	char	*copy;

	if (!hist || !entry)
		return ;
	if (hist->count >= hist->capacity)
		update_history_capacity(hist);
	copy = ft_strdup(entry);
	if (!copy)
		return ;
	hist->entries[hist->count] = copy;
	hist->count++;
}

char	*read_file_content(const char *path)
{
	int		fd;
	char	*content;
	ssize_t	bytes_read;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	content = malloc(FILE_BUFFER_SIZE);
	if (!content)
	{
		close(fd);
		return (NULL);
	}
	bytes_read = read(fd, content, FILE_BUFFER_SIZE - 1);
	if (bytes_read > 0)
		content[bytes_read] = '\0';
	else
		content[0] = '\0';
	close(fd);
	return (content);
}
