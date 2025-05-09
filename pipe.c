/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:31:57 by jgamarra          #+#    #+#             */
/*   Updated: 2025/04/21 21:12:43 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

struct cmd* pipecmd(struct cmd *left, struct cmd *right) {
    struct pipecmd *cmd;
    cmd = malloc(sizeof(*cmd));
    memset(cmd, 0, sizeof(*cmd));
    cmd->type = PIPE;
    cmd->left = left;
    cmd->right = right;
    return (struct cmd*)cmd;
}

struct cmd* parsepipe(char **ps, char *es) {
    struct cmd *cmd;

    // Parseamos el comando del lado izquierdo
    cmd = parseexec(ps, es);
    if (!cmd)
        panic("syntax: missing command before pipe");

    // Si hay un pipe...
    if (peek(ps, es, "|")) {
        gettoken(ps, es, 0, 0);  // Descarta el token del pipe

        // 👇 Comprobamos si lo siguiente también es un pipe o fin de entrada
        if (peek(ps, es, "|") || *ps == es) {
            ft_putstr_fd("minishell: syntax error near unexpected token `|'\n", 2);
            return NULL;
        }

        struct cmd *right = parsepipe(ps, es);
        if (!right) {
            ft_putstr_fd("minishell: syntax error after pipe\n", 2);
            return NULL;
        }
        cmd = pipecmd(cmd, right);
    }
    return cmd;
}

struct cmd* parseline(char **ps, char *es)
{
  struct cmd *cmd;

  cmd = parsepipe(ps, es);
//   while(peek(ps, es, "&")){
//     gettoken(ps, es, 0, 0);
//     cmd = backcmd(cmd);
//   }
//   if(peek(ps, es, ";")){
//     gettoken(ps, es, 0, 0);
//     cmd = listcmd(cmd, parseline(ps, es));
//   }
  return cmd;
}

int incomplete_cmd(const char *input) {
    int i = ft_strlen(input) - 1;
    // Salta espacios finales
    while (i >= 0 && ft_strchr(" \t\r\n", input[i]))
        i--;
    // Si el último carácter significativo es '|' se considera inol completo.
    if (i >= 0 && input[i] == '|')
        return 1;
    return 0;
}
