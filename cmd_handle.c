/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_handle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:40:49 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/25 19:51:51 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	handle_cmd_exec(t_execcmd *ecmd, t_minishell *minishell)
{
	int	i;

	if (!ecmd->argv[0])
		exit(0);
	if (valid_builtins((t_cmd *)ecmd))
		run_internal((t_cmd *)ecmd, minishell);
	else
	{
		valid_command(ecmd, minishell);
		i = 1;
		while (ecmd->argv[i])
		{
			ecmd->argv[i] = expand_variables(ecmd->argv[i], minishell);
			remove_quotes(ecmd, i);
			i++;
		}
		exec_command(ecmd->argv[0], ecmd->argv);
		ft_putstr_fd("exec failed ", 2);
		ft_putstr_fd(ecmd->argv[0], 2);
		ft_putchar_fd('\n', 2);
	}
}

static void	setup_redirection(char *file, int mode)
{
	int	fd;

	fd = open(file, mode, 0644);
	if (fd < 0)
	{
		perror("redirection failed");
		exit(1);
	}
	if (mode == O_RDONLY)
		dup2(fd, STDIN_FILENO);
	else
		dup2(fd, STDOUT_FILENO);
	close(fd);
}

static void	setup_heredoc(char *hdoc)
{
	int	pipefd[2];

	if (pipe(pipefd) < 0)
		panic("pipe error");
	write(pipefd[1], hdoc, ft_strlen(hdoc));
	close(pipefd[1]);
	dup2(pipefd[0], STDIN_FILENO);
	close(pipefd[0]);
	free(hdoc);
}

void	handle_cmd_redir(t_redircmd *rcmd, t_minishell *minishell)
{
	if (rcmd->hdoc)
		setup_heredoc(rcmd->hdoc);
	else
		setup_redirection(rcmd->file, rcmd->mode);
	runcmd(rcmd->cmd, minishell);
}

void	handle_cmd_pipe(t_pipecmd *pcmd, t_minishell *minishell)
{
	int		p[2];
	pid_t	pid1;
	pid_t	pid2;

	safe_pipe(p);
	pid1 = safe_fork();
	if (pid1 == 0)
	{
		dup2(p[1], STDOUT_FILENO);
		close(p[0]);
		close(p[1]);
		runcmd(pcmd->left, minishell);
	}
	pid2 = safe_fork();
	if (pid2 == 0)
	{
		dup2(p[0], STDIN_FILENO);
		close(p[0]);
		close(p[1]);
		runcmd(pcmd->right, minishell);
	}
	close(p[0]);
	close(p[1]);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
}
