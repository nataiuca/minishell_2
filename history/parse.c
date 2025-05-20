/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:30:35 by natferna          #+#    #+#             */
/*   Updated: 2025/05/20 18:47:14 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	parse_history_content(char *content, t_history *hist)
{
	size_t	pos;
	char	*line_start;

	pos = 0;
	line_start = content;
	while (content[pos])
	{
		if (content[pos] == '\n')
		{
			content[pos] = '\0';
			if (*line_start)
			{
				add_history(line_start);
				history_add(hist, line_start);
			}
			line_start = content + pos + 1;
		}
		pos++;
	}
	if (*line_start)
	{
		add_history(line_start);
		history_add(hist, line_start);
	}
}
