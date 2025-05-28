/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nulterminate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 19:25:28 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/24 21:54:34 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	handle_nul_exec(t_execcmd *ecmd)
{
	int	i;

	i = 0;
	while (ecmd->argv[i])
	{
		*(ecmd->eargv[i]) = 0;
		i++;
	}
}

static void	handle_nul_redir(t_redircmd *rcmd)
{
	nulterminate(rcmd->cmd);
	if (rcmd->efile)
		*(rcmd->efile) = 0;
}

static void	handle_nul_pipe(t_pipecmd *pcmd)
{
	nulterminate(pcmd->left);
	nulterminate(pcmd->right);
}

// NUL-terminate all the counted strings.
t_cmd	*nulterminate(t_cmd *cmd)
{
	if (!cmd)
		return (NULL);
	if (cmd->type == EXEC)
		handle_nul_exec((t_execcmd *)cmd);
	else if (cmd->type == REDIR)
		handle_nul_redir((t_redircmd *)cmd);
	else if (cmd->type == PIPE)
		handle_nul_pipe((t_pipecmd *)cmd);
	return (cmd);
}
