/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:33:31 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/24 22:13:09 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Function to parse a command string by pipes.
 */
t_cmd	*parsepipe(char **ps, char *es, t_minishell *minishell)
{
	t_cmd	*cmd;

	cmd = parseexec(ps, es, minishell);
	if (peek(ps, es, "|") && !minishell->error_syntax)
	{
		gettoken(ps, es, 0, 0);
		cmd = pipecmd(cmd, parsepipe(ps, es, minishell));
	}
	return (cmd);
}

/*
 * Function to parse a command string into a command structure by tokenizing
 * the output is a structure that contains the command and its arguments.
 */
// creo que se puede quitar segundo if. nunca se va a cumplir
// porque no los caracteres fuera de scope se considera como parametro
t_cmd	*parsecmd(char *s, t_minishell *minishell)
{
	char		*es;
	struct cmd	*cmd;

	es = s + ft_strlen(s);
	cmd = parsepipe(&s, es, minishell);
	if (!minishell->error_syntax)
	{
		peek(&s, es, "");
		if (s != es)
		{
			ft_putstr_fd("leftovers: ", 2);
			ft_putstr_fd(s, 2);
			ft_putchar_fd('\n', 2);
			panic("syntax ");
		}
		nulterminate(cmd);
	}
	return (cmd);
}
