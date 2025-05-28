/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:48:19 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/03 16:32:39 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	env_impl(t_cmd *cmd, t_minishell *minishell)
{
	int			idx;
	t_execcmd	*ecmd;

	idx = 0;
	ecmd = (t_execcmd *)cmd;
	if (ecmd->argv[1])
	{
		ft_putstr_fd(PROMPT_ERROR, STDERR_FILENO);
		ft_putstr_fd("env: too many arguments\n", STDERR_FILENO);
		minishell->status = 1;
		return ;
	}
	while (minishell->env[idx] && minishell->exported[idx])
	{
		ft_putstr_fd(minishell->env[idx], STDOUT_FILENO);
		ft_putstr_fd("\n", STDOUT_FILENO);
		idx++;
	}
	minishell->status = 0;
}
