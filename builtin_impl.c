/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin_impl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:49:52 by jgamarra          #+#    #+#             */
/*   Updated: 2025/04/19 23:57:32 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// void expand_variables(t_cmd *cmd, t_minishell *minishell)
// {
// 	char *s;
// 	char *es;
// 	int idx = 1;
// 	t_execcmd *ecmd;
// 	char quote;
// 	char *result;
// 	char *var_name;
// 	char tmp[2];
// 	char *tmp_result;

	
// 	ecmd = (t_execcmd *)cmd;
// 	tmp[1] = '\0';
// 	while (ecmd->argv[idx])
// 	{
// 		result = ft_strdup("");
// 		var_name = ft_strdup("");
// 		s = ecmd->argv[idx];
// 		es = s + ft_strlen(ecmd->argv[idx]);
// 		while (*s)
// 		{
// 			// control quote. do not handle quote or backslash
// 			if (!quote && (*s == '\'' || *s == '\"'))
// 			{
// 				tmp[0] = *s;
// 				tmp_result = ft_strjoin(result, tmp);
// 				free(result);
// 				result = ft_strdup(tmp_result);
// 				free(tmp_result);
// 				quote = *s;
// 				s++;
// 				continue ;
// 			}
// 			else if (quote && *s == quote)
// 			{
// 				tmp[0] = *s;
// 				tmp_result = ft_strjoin(result, tmp);
// 				free(result);
// 				result = ft_strdup(tmp_result);
// 				free(tmp_result);
// 				quote = 0;
// 				s++;
// 				continue ;
// 			}
// 			// control quote

// 			// control $ if start like a valid variable
// 			if (quote != '\'' && *s == '$')
// 			{
// 				s++;
// 				if (*s == '?')
// 				{
// 					tmp_result = ft_strjoin(result, ft_itoa(minishell->status));
// 					free(result);
// 					result = ft_strdup(tmp_result);
// 					free(tmp_result);
// 					s++;
// 					continue ;
// 				}
// 				else if (*(s + 1) == '_' || ft_isalpha(*(s + 1)))
// 				{
// 					while (*s && (*s == '_' || ft_isalnum(*s)))
// 					{
// 						tmp[0] = *s;
// 						var_name = ft_strjoin(var_name, tmp);
// 						s++;
// 					}
// 					tmp_result = ft_strjoin(result, getenv_minishell(minishell, var_name));
// 					free(result);
// 					result = ft_strdup(tmp_result);
// 					free(tmp_result);
// 					free(var_name);
// 					continue ;
// 				}
// 			}
// 			tmp[0] = *s;
// 			tmp_result = ft_strjoin(result, tmp);
// 			free(result);
// 			result = ft_strdup(tmp_result);
// 			free(tmp_result);
// 			s++;
// 		}
// 		if (s == es)
// 		{
// 			ecmd->argv[idx] = result;
// 		}
// 		idx++;
// 	}
// }

char *expand_variables(char *arg, t_minishell *minishell)
{
	char *s;
	char *es;
	int idx = 1;
	char quote;
	char *result;
	char *var_name;
	char tmp[2];
	char *tmp_result;

	
	tmp[1] = '\0';
	
	result = ft_strdup("");
	var_name = ft_strdup("");
	s = arg;
	es = s + ft_strlen(arg);
	while (*s)
	{
		// control quote. do not handle quote or backslash
		if (!quote && (*s == '\'' || *s == '\"'))
		{
			tmp[0] = *s;
			tmp_result = ft_strjoin(result, tmp);
			free(result);
			result = ft_strdup(tmp_result);
			free(tmp_result);
			quote = *s;
			s++;
			continue ;
		}
		else if (quote && *s == quote)
		{
			tmp[0] = *s;
			tmp_result = ft_strjoin(result, tmp);
			free(result);
			result = ft_strdup(tmp_result);
			free(tmp_result);
			quote = 0;
			s++;
			continue ;
		}
		// control quote

		// control $ if start like a valid variable
		if (quote != '\'' && *s == '$')
		{
			s++;
			if (*s == '?')
			{
				tmp_result = ft_strjoin(result, ft_itoa(minishell->status));
				free(result);
				result = ft_strdup(tmp_result);
				free(tmp_result);
				s++;
				continue ;
			}
			else if (*(s + 1) == '_' || ft_isalpha(*(s + 1)))
			{
				while (*s && (*s == '_' || ft_isalnum(*s)))
				{
					tmp[0] = *s;
					var_name = ft_strjoin(var_name, tmp);
					s++;
				}
				tmp_result = ft_strjoin(result, getenv_minishell(minishell, var_name));
				free(result);
				result = ft_strdup(tmp_result);
				free(tmp_result);
				free(var_name);
				continue ;
			}
		}
		tmp[0] = *s;
		tmp_result = ft_strjoin(result, tmp);
		free(result);
		result = ft_strdup(tmp_result);
		free(tmp_result);
		s++;
	}
	if (s == es)
	{
		arg = result;
	}
	return arg;
}

void split_variables(t_cmd *cmd, t_minishell *minishell, char c)
{
	t_execcmd *ecmd;
	char **split;

	ecmd = (t_execcmd *)cmd;
	
	
}

void remove_quotes(t_execcmd *ecmd, int idx)
{
	char *result;
	char tmp[2];
	char *tmp_result;
	char *str;

	result= ft_strdup("");
	tmp[1] = '\0';
	str = ecmd->argv[idx];
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
	free(ecmd->argv[idx]);
	ecmd->argv[idx] = result;
}
