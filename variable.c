/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variable.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 22:32:10 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/23 22:36:47 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	handle_quote_state(char c, char *quote)
{
	if (!*quote && (c == '\'' || c == '\"'))
	{
		*quote = c;
		return (1);
	}
	if (*quote && c == *quote)
	{
		*quote = 0;
		return (1);
	}
	return (0);
}

static char	*expand_named_var(char **s, t_minishell *minishell)
{
	int		len;
	char	*key;
	char	*val;
	char	*dup;

	len = 0;
	while ((*s)[len] && (ft_isalnum((*s)[len]) || (*s)[len] == '_'))
		len++;
	key = ft_substr(*s, 0, len);
	val = getenv_minishell(minishell, key);
	dup = ft_strdup(val);
	free(key);
	*s += len;
	return (dup);
}

static char	*expand_chunk(char **s, char quote, t_minishell *minishell)
{
	char	*var;
	char	tmp[2];

	if (**s == '$' && quote != '\'')
	{
		(*s)++;
		if (**s == '?')
		{
			var = ft_itoa(minishell->status);
			(*s)++;
		}
		else if (**s == '_' || ft_isalpha(**s))
			var = expand_named_var(s, minishell);
		else
			return (NULL);
	}
	else
	{
		tmp[0] = **s;
		tmp[1] = '\0';
		(*s)++;
		var = ft_strdup(tmp);
	}
	return (var);
}

static char	*strjoin_free(char *s1, char *s2)
{
	char	*res;

	res = ft_strjoin(s1, s2);
	free(s1);
	free(s2);
	return (res);
}

char	*expand_variables(char *arg, t_minishell *minishell)
{
	char	*s;
	char	*result;
	char	*chunk;
	char	quote;

	s = arg;
	result = ft_strdup("");
	quote = 0;
	while (*s)
	{
		if (handle_quote_state(*s, &quote))
		{
			s++;
			continue ;
		}
		chunk = expand_chunk(&s, quote, minishell);
		if (!chunk)
			continue ;
		result = strjoin_free(result, chunk);
	}
	return (result);
}
