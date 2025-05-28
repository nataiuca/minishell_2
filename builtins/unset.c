/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:48:19 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/21 21:01:14 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void static	valid_params(char *argument, t_minishell *minishell)
{
	int		s;
	char	**q;

	s = -1;
	q = &argument;
	while (argument[++s])
	{
		if (s == 0 && (ft_isalpha(argument[s]) || argument[s] == '_')
			|| s != 0 && (ft_isalnum(argument[s]) || argument[s] == '_'))
		{
			if (argument[s + 1])
				continue ;
		}
		else
			unset_error(argument, minishell);
	}
}

void	unset_impl(t_cmd *cmd, t_minishell *minishell)
{
	int			idx;
	t_execcmd	*ecmd;

	idx = 0;
	ecmd = (t_execcmd *)cmd;
	while (ecmd->argv[++idx])
	{
		if (!is_valid_quote(cmd, minishell))
			return ;
		ecmd->argv[idx] = expand_variables(ecmd->argv[idx], minishell);
		remove_quotes(ecmd, idx);
		valid_params(ecmd->argv[idx], minishell);
		remove_env_value(minishell, ecmd->argv[idx]);
		idx++;
	}
}
