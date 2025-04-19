/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:35:51 by jgamarra          #+#    #+#             */
/*   Updated: 2025/04/19 20:14:11 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void print_expand_variables(t_cmd *cmd, int idx, int *pos, t_minishell *minishell)
{
	int extend;
	char *str;
	t_execcmd *ecmd;
	char *tmp;

	ecmd = (t_execcmd *)cmd;
	extend = 0;
	while (ecmd->argv[idx][*pos + extend] && (ft_isalnum(ecmd->argv[idx][*pos + extend]) || ecmd->argv[idx][*pos + extend] == '_'))
		extend++;
	tmp = ft_substr(ecmd->argv[idx], *pos, extend);
	// str = getenv(tmp);
	str = getenv_minishell(minishell, tmp);
	free(tmp);
	if (str)
	{
		write(1, str, ft_strlen(str));
		// free(str);
	}
	else
		write(1, "", 1);// if variable not found print empty string
	*pos += extend;
}

int is_valid_quote(t_cmd *cmd, t_minishell *minishell)
{
	char quote;
	int idx;
	t_execcmd *ecmd;
	int pos;
	
	ecmd = (t_execcmd *)cmd;
	idx = 1;
	quote = 0;
	while (ecmd->argv[idx])
	{
		pos = 0;
		while (ecmd->argv[idx][pos])
		{
			if (!quote && (ecmd->argv[idx][pos] == '\'' || ecmd->argv[idx][pos] == '\"'))
				quote = ecmd->argv[idx][pos];
			else if (quote && ecmd->argv[idx][pos] == quote)
				quote = 0;
			pos++;
		}
		idx++;
	}
	if (quote)
	{
		write(2, "Error: Unmatched quote\n", 23);
		minishell->status = 1;
		return (0);
	}
	return (1);
}

char *getenv_minishell(t_minishell *minishell, char *key)
{
	int len = ft_strlen(key);
	for (int i = 0; minishell->env[i]; i++)
	{
		if (ft_strncmp(minishell->env[i], key, len) == 0 && minishell->env[i][len] == '=')
			return (&minishell->env[i][len + 1]);
	}
	return (ft_strdup(""));
}


