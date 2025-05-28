/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:48:19 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/25 19:02:03 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void static	prepare_arguments(t_cmd *cmd, t_minishell *minishell)
{
	t_execcmd	*ecmd;
	int			idx;

	idx = 1;
	ecmd = (t_execcmd *)cmd;
	if (!ecmd->argv[1])
		ecmd->argv[1] = getenv_minishell(minishell, "HOME");
	if (!is_valid_quote(cmd, minishell))
		return ;
	while (idx == 1)
	{
		ecmd->argv[idx] = expand_variables(ecmd->argv[idx], minishell);
		remove_quotes(ecmd, idx);
		idx++;
	}
}

void static	move_directory(t_execcmd *ecmd, t_minishell *minishell)
{
	char	*cd_path;

	if (chdir(ecmd->argv[1]) != 0)
	{
		ft_putstr_fd(PROMPT_ERROR, STDERR_FILENO);
		ft_putstr_fd("cd: ", STDERR_FILENO);
		ft_putstr_fd(ecmd->argv[1], STDERR_FILENO);
		ft_putstr_fd(": No such file or directory\n", STDERR_FILENO);
		minishell->status = 1;
		return ;
	}
	upd_env_value(minishell, "OLDPWD", get_env_value(minishell, "PWD"), 1);
	cd_path = getcwd(NULL, 0);
	upd_env_value(minishell, "PWD", cd_path, 1);
	free(cd_path);
}

void	cd_impl(t_cmd *cmd, t_minishell *minishell)
{
	t_execcmd	*ecmd;

	ecmd = (t_execcmd *)cmd;
	prepare_arguments(cmd, minishell);
	if (ecmd->argv[1][0] == '-')
	{
		ft_putstr_fd(PROMPT_ERROR, STDERR_FILENO);
		ft_putstr_fd("cd: options are not permitted\n", STDERR_FILENO);
		minishell->status = 1;
		return ;
	}
	if (ft_strlen(ecmd->argv[1]) > 0)
		move_directory(ecmd, minishell);
	else
		free(ecmd->argv[1]);
	minishell->status = 0;
}
