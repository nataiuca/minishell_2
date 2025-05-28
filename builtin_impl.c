/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin_impl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:49:52 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/25 19:25:24 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	split_variables(t_cmd *cmd, t_minishell *minishell, char c)
{
	t_execcmd	*ecmd;
	char		**split;

	ecmd = (t_execcmd *)cmd;
}

void	remove_quotes(t_execcmd *ecmd, int idx)
{
	char	*result;
	char	tmp[2];
	char	*tmp_result;
	char	*str;

	result = ft_strdup("");
	tmp[1] = '\0';
	str = ecmd->argv[idx];
	while (*str)
	{
		if (*str != '\'' && *str != '\"')
		{
			tmp[0] = *str;
			tmp_result = ft_strjoin(result, tmp);
			free(result);
			result = tmp_result;
		}
		str++;
	}
	free(ecmd->argv[idx]);
	ecmd->argv[idx] = result;
}

char	*remove_quotes_simple(char *str)
{
	char	*result;
	char	tmp[2];
	char	*tmp_result;

	result = ft_strdup("");
	tmp[1] = '\0';
	while (*str)
	{
		if (*str != '\'' && *str != '\"')
		{
			tmp[0] = *str;
			tmp_result = ft_strjoin(result, tmp);
			free(result);
			result = ft_strdup(tmp_result);
			free(tmp_result);
		}
		str++;
	}
	return (result);
}
