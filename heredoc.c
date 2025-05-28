/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 19:36:23 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/23 19:38:05 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	is_delimiter(char *line, char *delimiter)
{
	size_t	len;

	len = ft_strlen(delimiter);
	if (ft_strncmp(line, delimiter, len) == 0 && line[len] == '\n')
		return (1);
	return (0);
}

static char	*append_line(char *heredoc, char *line)
{
	char	*new;
	size_t	new_len;

	new_len = ft_strlen(heredoc) + ft_strlen(line) + 1;
	new = malloc(new_len);
	if (!new)
		panic("Memory allocation failed");
	ft_strlcpy(new, heredoc, new_len);
	ft_strlcat(new, line, new_len);
	free(heredoc);
	return (new);
}

char	*process_heredoc(char *q, char *eq)
{
	char	*heredoc;
	char	*line;
	char	*delimiter;
	size_t	len;

	len = eq - q;
	delimiter = ft_substr(q, 0, len);
	delimiter = remove_quotes_simple(delimiter);
	heredoc = ft_strdup("");
	if (!heredoc || !delimiter)
		panic("Memory allocation failed");
	while (1)
	{
		line = readline("> ");
		if (!line)
			break ;
		line = ft_strjoin_free(line, "\n");
		if (is_delimiter(line, delimiter))
			break ;
		heredoc = append_line(heredoc, line);
		free(line);
	}
	free(delimiter);
	free(line);
	return (heredoc);
}
