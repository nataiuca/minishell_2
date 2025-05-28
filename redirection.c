/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirection.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:29:04 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/23 21:17:05 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static t_cmd	*handle_redir_token(t_cmd *cmd, char *q, char *eq, int tok)
{
	cmd = redircmd(cmd, q, eq, tok);
	return (cmd);
}

static t_cmd	*handle_heredoc_token(t_cmd *cmd, char *q, char *eq)
{
	char	*hdoc;

	hdoc = process_heredoc(q, eq);
	if (!hdoc)
		panic("heredoc failed");
	cmd = redircmd_hdoc(cmd, hdoc);
	return (cmd);
}

t_cmd	*parseredirs(t_cmd *cmd, char **ps, char *es, t_minishell *minishell)
{
	int		tok;
	char	*q;
	char	*eq;

	while (peek(ps, es, "<>") && !minishell->error_syntax)
	{
		tok = gettoken(ps, es, &q, &eq);
		if (gettoken(ps, es, &q, &eq) != 'a')
		{
			panic("syntax error near unexpected token.\n");
			minishell->status = 258;
			minishell->error_syntax = true;
			break ;
		}
		if (tok == HDOC)
			cmd = handle_heredoc_token(cmd, q, eq);
		else if (tok == '<' || tok == '>' || tok == '+')
			return (handle_redir_token(cmd, q, eq, tok));
	}
	return (cmd);
}
