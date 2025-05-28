/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 21:53:48 by natferna          #+#    #+#             */
/*   Updated: 2025/05/28 21:54:58 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	init_history(t_minishell *ms)
{
	ms->history = history_create();
	if (!ms->history)
		ft_exit_message("Error: crear historial\n", 1);
	load_history_file(ms->history, HISTFILE_NAME);
}

char	*get_input(t_minishell *ms)
{
	char	*line;

	if (isatty(fileno(stdin)))
		return (readline(PROMPT));
	line = get_next_line(fileno(stdin));
	if (!line)
		return (NULL);
	line = ft_strtrim(line, "\n");
	return (line);
}
