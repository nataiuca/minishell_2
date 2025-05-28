/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:35:51 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/25 19:54:04 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	print_expand_var(t_cmd *cmd, int idx, int *pos, t_minishell *mshell)
{
	int			extend;
	char		*str;
	t_execcmd	*ecmd;
	char		*tmp;

	ecmd = (t_execcmd *)cmd;
	extend = 0;
	while (ecmd->argv[idx][*pos + extend]
		&& (ft_isalnum(ecmd->argv[idx][*pos + extend])
			|| ecmd->argv[idx][*pos + extend] == '_'))
		extend++;
	tmp = ft_substr(ecmd->argv[idx], *pos, extend);
	str = getenv_minishell(mshell, tmp);
	free(tmp);
	if (str)
	{
		write(1, str, ft_strlen(str));
	}
	else
		write(1, "", 1);
	*pos += extend;
}

char	*getenv_minishell(t_minishell *minishell, char *key)
{
	int	len;
	int	i;

	len = ft_strlen(key);
	i = 0;
	while (minishell->env[i])
	{
		if (ft_strncmp(minishell->env[i], key, len) == 0
			&& minishell->env[i][len] == '=')
			return (&minishell->env[i][len + 1]);
		i++;
	}
	return (ft_strdup(""));
}
