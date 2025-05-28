/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_impl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:45:13 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/25 19:38:36 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// Execute cmd.  Never returns.
void	runcmd(t_cmd *cmd, t_minishell *minishell)
{
	if (!cmd)
		exit(0);
	if (cmd->type == EXEC)
		handle_cmd_exec((t_execcmd *)cmd, minishell);
	else if (cmd->type == REDIR)
		handle_cmd_redir((t_redircmd *)cmd, minishell);
	else if (cmd->type == PIPE)
		handle_cmd_pipe((t_pipecmd *)cmd, minishell);
	else
		panic("runcmd: unknown type");
	exit(0);
}

void	run_external(t_cmd *cmd, t_minishell *minishell)
{
	int		status;
	pid_t	pid;

	pid = fork1();
	if (pid == 0)
		runcmd(cmd, minishell);
	waitpid (pid, &status, 0);
	if (WIFEXITED(status))
	{
		minishell->status = WEXITSTATUS(status);
	}
}
