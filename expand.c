/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:58:39 by natferna          #+#    #+#             */
/*   Updated: 2025/04/21 21:01:13 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char *extract_single_quotes(char **ps, char *es)
{
    (*ps)++; // salta la comilla de apertura '
    char *start = *ps;

    while (*ps < es && **ps != '\'')
        (*ps)++;

    int len = *ps - start;
    char *token = malloc(len + 1);
    if (!token)
        error_exit("malloc failed (single quotes)");

    memcpy(token, start, len);
    token[len] = '\0';

    if (*ps < es && **ps == '\'')  // salta la comilla de cierre
        (*ps)++;

    return token;  // ✅ devuelve sin comillas
}

char *extract_double_quotes(char **ps, char *es)
{
    (*ps)++; // salta la comilla de apertura "
    char *start = *ps;

    while (*ps < es && **ps != '"')
        (*ps)++;

    int len = *ps - start;
    char *token = malloc(len + 1);
    if (!token)
        error_exit("malloc failed (double quotes)");

    memcpy(token, start, len);
    token[len] = '\0';

    if (*ps < es && **ps == '"')  // salta la comilla de cierre
        (*ps)++;

    return token;  // ✅ devuelve sin comillas
}

char *extract_token(char **ps, char *es) {
    char *token = NULL;

    if (**ps == '\'' || **ps == '"') {
        char current_quote = **ps;
        if (current_quote == '\'')
            token = extract_single_quotes(ps, es);
        else
            token = extract_double_quotes(ps, es);
    } else {
        const char *ws = " \t\r\n\v";
        const char *sy = "|&;()<>";
        char *start = *ps;
        while (*ps < es && !strchr(ws, **ps) && !strchr(sy, **ps))
            (*ps)++;
        int len = *ps - start;
        token = malloc(len + 1);
        if (!token)
            error_exit("Error: malloc failed in extract_token (no quotes).\n");
        memcpy(token, start, len);
        token[len] = '\0';
    }
    return token;
}

