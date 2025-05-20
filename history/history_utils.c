/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   history_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:07:03 by natferna          #+#    #+#             */
/*   Updated: 2025/05/20 21:11:34 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*read_file_content(const char *path);
void	parse_history_content(char *content, t_history *hist);
void	write_history_lines(int fd, t_history *hist, int start);

char	*construct_history_path(const char *histfile_name)
{
	char	*home;
	char	*path;
	size_t	total;

	home = getenv("HOME");
	if (!home || !histfile_name)
		return (NULL);
	total = ft_strlen(home) + 1 + ft_strlen(histfile_name) + 1;
	path = malloc(total);
	if (!path)
		return (NULL);
	strcpy(path, home);
	strcat(path, "/");
	strcat(path, histfile_name);
	return (path);
}

void	load_history_file(t_history *hist, const char *histfile_name)
{
	char	*path;
	char	*content;

	path = construct_history_path(histfile_name);
	if (!path)
		return ;
	if (access(path, F_OK) != 0)
	{
		printf("El archivo de historial no existe.\n");
		free(path);
		return ;
	}
	content = read_file_content(path);
	free(path);
	if (!content)
		return ;
	parse_history_content(content, hist);
	free(content);
}

void	save_history_file(t_history *hist, const char *histfile_name,
		int max_entries)
{
	char	*path;
	int		fd;
	int		start;

	path = construct_history_path(histfile_name);
	if (!path)
		return ;
	fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		free(path);
		return ;
	}
	if (hist->count > max_entries)
		start = hist->count - max_entries;
	else
		start = 0;
	write_history_lines(fd, hist, start);
	close(fd);
	free(path);
}
