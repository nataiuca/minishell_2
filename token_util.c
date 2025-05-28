/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 22:19:20 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/23 22:20:38 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*skip_whitespace(char *s, char *es)
{
	const char	*whitespace = " \t\r\n\v";

	while (s < es && ft_strchr(whitespace, *s))
		s++;
	return (s);
}

static int	handle_pipe(char *s, char **out)
{
	*out = s + 1;
	return ('|');
}

static int	handle_input_redir(char *s, char *es, char **out)
{
	if ((s + 1) < es && *(s + 1) == '<')
	{
		*out = s + 2;
		return (HDOC);
	}
	*out = s + 1;
	return ('<');
}

static int	handle_output_redir(char *s, char *es, char **out)
{
	if ((s + 1) < es && *(s + 1) == '>')
	{
		*out = s + 2;
		return (TOKEN_APPEND);
	}
	*out = s + 1;
	return ('>');
}

int	classify_token_type(char *s, char *es, char **out)
{
	if (*s == '|')
		return (handle_pipe(s, out));
	if (*s == '<')
		return (handle_input_redir(s, es, out));
	if (*s == '>')
		return (handle_output_redir(s, es, out));
	*out = s;
	return (TOKEN_WORD);
}
