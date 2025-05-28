/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:48:19 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/12 22:45:20 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	echo_impl(t_cmd *cmd, t_minishell *minishell)
{
	int			idx;
	t_execcmd	*ecmd;
	int			new_line;

	ecmd = (t_execcmd *)cmd;
	new_line = 1;
	idx = 0;
	while (ecmd->argv[++idx] && ft_strstr(ecmd->argv[idx], "-n"))
		new_line = 0;
	while (ecmd->argv[idx])
	{
		if (!is_valid_quote(cmd, minishell))
			return ;
		ecmd->argv[idx] = expand_variables(ecmd->argv[idx], minishell);
		remove_quotes(ecmd, idx);
		ft_putstr_fd(ecmd->argv[idx], STDOUT_FILENO);
		if (ecmd->argv[idx + 1])
			ft_putstr_fd(" ", STDOUT_FILENO);
		free(ecmd->argv[idx]);
		idx++;
	}
	if (new_line)
		ft_putstr_fd("\n", STDOUT_FILENO);
	minishell->status = 0;
}
