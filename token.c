/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:25:10 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/23 22:20:41 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static char	*parse_quoted_token(char *s, char *es)
{
	char	quote;

	quote = *s++;
	while (s < es && *s != quote)
		s++;
	if (s < es)
		s++;
	return (s);
}

static char	*parse_token_body(char *s, char *es)
{
	char		c;
	const char	*whitespace = " \t\r\n\v";
	const char	*symbols = "<|>";

	while (s < es && !ft_strchr(whitespace, *s) && !ft_strchr(symbols, *s))
	{
		if (*s == '\'' || *s == '"')
			s = parse_quoted_token(s, es);
		else
			s++;
	}
	return (s);
}

int	gettoken(char **ps, char *es, char **q, char **eq)
{
	char	*s;
	int		ret;

	s = skip_whitespace(*ps, es);
	if (q)
		*q = s;
	if (s >= es)
		return (0);
	ret = classify_token_type(s, es, &s);
	if (ret == TOKEN_WORD)
		s = parse_token_body(s, es);
	if (eq)
		*eq = s;
	*ps = skip_whitespace(s, es);
	return (ret);
}

int	peek(char **ps, char *es, char *toks)
{
	char	*s;

	s = *ps;
	while (s < es && strchr(" \t\r\n\v", *s))
		s++;
	*ps = s;
	return (*s && strchr(toks, *s));
}
