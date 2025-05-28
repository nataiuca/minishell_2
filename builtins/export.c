/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:48:19 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/25 19:02:20 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void static	print_all_sorted(t_execcmd *ecmd, t_minishell *minishell)
{
	int		idx;
	char	**envp;
	int		pos;
	int		value;

	idx = -1;
	envp = minishell->env;
	while (envp[++idx] && !ecmd->argv[1])
	{
		pos = -1;
		value = 0;
		ft_putstr_fd("declare -x ", STDOUT_FILENO);
		while (envp[idx][++pos])
		{
			ft_putchar_fd(envp[idx][pos], STDOUT_FILENO);
			if (envp[idx][pos] == '=' && value == 0)
			{
				ft_putstr_fd("\"", STDOUT_FILENO);
				value = 1;
			}
		}
		if (value)
			ft_putstr_fd("\"", STDOUT_FILENO);
		ft_putstr_fd("\n", STDOUT_FILENO);
	}
}

void static	save_argument(char *arg[2], char *argument, char **q, int s)
{
	char	*result[2];

	argument[s] = 0;
	arg[0] = *q;
	*q = *q + s + 1;
	while (argument[++s])
		;
	if (!argument[s + 1])
		arg[1] = *q;
}

void static	split_params(char *arg[2], char *argument, t_minishell *minishell)
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
			else
				arg[0] = *q;
		}
		else
		{
			if (s != 0 && argument[s] == '=')
				save_argument(arg, argument, q, s);
			else
				export_error(argument, minishell);
			break ;
		}
	}
}

int static	valid_if_exported(char *argument, char *key, t_minishell *minishell)
{
	int		s;
	int		exported;

	s = -1;
	exported = 0;
	if (env_exists(minishell, key))
		return (1);
	while (argument[++s])
	{
		if (argument[s] == '=')
		{
			exported = 1;
			break ;
		}
	}
	return (exported);
}

void	export_impl(t_cmd *cmd, t_minishell *minishell)
{
	int			idx;
	t_execcmd	*ecmd;
	char		*arg[2];
	int			exported;

	idx = 0;
	ecmd = (t_execcmd *)cmd;
	print_all_sorted(ecmd, minishell);
	while (ecmd->argv[++idx])
	{
		init_var(arg);
		if (!is_valid_quote(cmd, minishell))
			return ;
		ecmd->argv[idx] = expand_variables(ecmd->argv[idx], minishell);
		remove_quotes(ecmd, idx);
		exported = valid_if_exported(ecmd->argv[idx], arg[0], minishell);
		split_params(arg, ecmd->argv[idx], minishell);
		if (minishell->status == 1)
			return ;
		if (env_exists(minishell, arg[0]) && arg[1])
			upd_env_value(minishell, arg[0], arg[1], exported);
		else
			new_env_value(minishell, arg[0], arg[1], exported);
	}
}
