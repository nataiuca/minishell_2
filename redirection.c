/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirection.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:29:04 by jgamarra          #+#    #+#             */
/*   Updated: 2025/04/21 22:07:51 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

struct cmd	*redircmd(struct cmd *subcmd, char *file, char *efile, int mode,
		mode_t right, int fd, char *hdoc)
{
	struct redircmd	*cmd;

	cmd = malloc(sizeof(*cmd));
	memset(cmd, 0, sizeof(*cmd));
	cmd->type = REDIR;
	cmd->cmd = subcmd;
	cmd->file = file;
	cmd->efile = efile;
	cmd->mode = mode;
	cmd->right = right;
	cmd->fd = fd;
	cmd->hdoc = hdoc;
	return ((struct cmd *)cmd);
}

struct cmd* parseredirs(struct cmd *cmd, char **ps, char *es) {
    int tok;
    char *q, *eq;
    char *last_hdoc = NULL;  // Almacenará el contenido del último heredoc encontrado

    while (peek(ps, es, "<>")) {
        tok = gettoken(ps, es, &q, &eq);
        if (tok == HDOC) {
            if (gettoken(ps, es, &q, &eq) != 'a')
                panic("Falta delimitador para heredoc");
            // Si ya habíamos leído un heredoc, lo liberamos (se descarta)
            if (last_hdoc) {
                free(last_hdoc);
                last_hdoc = NULL;
            }
            // Lee el contenido del heredoc actual
            last_hdoc = process_heredoc(q, eq);
        } else {
            if (gettoken(ps, es, &q, &eq) != 'a')
                panic("zsh: parse error near `\\n`");
            switch (tok) {
                case '<':
                    cmd = redircmd(cmd, q, eq, O_RDONLY, 0, 0, NULL);
                    break;
                case '>':
                    cmd = redircmd(cmd, q, eq, O_CREAT | O_WRONLY | O_TRUNC, 0644, 1, NULL);
                    break;
                case '+':  // Para >>
                    cmd = redircmd(cmd, q, eq, O_CREAT | O_WRONLY | O_APPEND, 0644, 1, NULL);
                    break;
            }
        }
    }
    // Si se leyó un heredoc (último heredoc) se crea el nodo de redirección heredoc
    if (last_hdoc) {
        cmd = redircmd(cmd, NULL, NULL, 0, 0, 0, last_hdoc);
    }
    return cmd;
}


char *process_heredoc(char *q, char *eq) {
    char *heredoc;
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;
    char delimiter[eq - q + 1]; // Longitud del delimitador
    int acc_size = 1;  // Para la cadena acumulada

    strncpy(delimiter, q, eq - q);
    delimiter[eq - q] = '\0';

    heredoc = malloc(1);
    if (!heredoc)
        panic("Memory allocation failed");
    heredoc[0] = '\0';

    while (1) {
        printf("heredoc> ");
        fflush(stdout);
        nread = getline(&line, &len, stdin);
        if (nread == -1)
            break;
        // Si la línea coincide EXACTAMENTE con el delimitador seguido de '\n'
        if (strncmp(line, delimiter, strlen(delimiter)) == 0 &&
            line[strlen(delimiter)] == '\n')
            break;
        // Se acumula la línea leída
        acc_size += nread;
        heredoc = realloc(heredoc, acc_size);
        if (!heredoc)
            panic("Memory allocation failed");
        strcat(heredoc, line);
    }
    free(line);
    return heredoc;
}
