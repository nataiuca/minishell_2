/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:18:47 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/23 22:24:43 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Function to parse the command and its arguments
 * and return a command structure.
 */
static t_cmd	*parse_arg(t_cmd *ret, char **ps, char *es, t_minishell *ms)
{
	char		*q;
	char		*eq;
	int			tok;
	t_execcmd	*cmd;
	int			argc;

	cmd = (t_execcmd *)ret;
	argc = 0;
	while (!peek(ps, es, "|") && !ms->error_syntax)
	{
		tok = gettoken(ps, es, &q, &eq);
		if (tok == 0)
			break ;
		if (tok != 'a')
			panic("syntax ");
		if (argc >= MAXARGS)
			panic("too many args");
		cmd->argv[argc] = q;
		cmd->eargv[argc] = eq;
		argc++;
		ret = parseredirs(ret, ps, es, ms);
	}
	cmd->argv[argc] = 0;
	cmd->eargv[argc] = 0;
	return (ret);
}

/*
 * Function to parse a command string by redirections.
 */
t_cmd	*parseexec(char **ps, char *es, t_minishell *minishell)
{
	t_cmd	*ret;

	ret = execcmd();
	ret = parseredirs(ret, ps, es, minishell);
	ret = parse_arg(ret, ps, es, minishell);
	return (ret);
}
