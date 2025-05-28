/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   history_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:07:03 by natferna          #+#    #+#             */
/*   Updated: 2025/05/29 00:58:10 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*construct_history_path(const char *histfile_name)
{
	char	*home;
	char	*path;
	size_t	total;

	home = getenv("HOME");
	if (!home || !*home || !histfile_name || !*histfile_name)
		return (NULL);
	total = ft_strlen(home) + ft_strlen(histfile_name) + 2;
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

void	save_history_file(t_minishell *minishell, char *input)
{
	int		fd;
	char	*path;

	if (!input || input[0] == '\0')
		return ;
	if (ft_strncmp(input, "history", 7) != 0)
	{
		add_history(input);
		history_add(minishell->history, input);
	}
	path = construct_history_path(HISTFILE_NAME);
	if (!path)
		return ;
	fd = open(path, O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd < 0)
	{
		return (perror("Error al abrir el archivo de historial"), free(path));
	}
	write(fd, input, ft_strlen(input));
	write(fd, "\n", 1);
	close(fd);
	free(path);
}
