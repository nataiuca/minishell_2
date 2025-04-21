/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:34:17 by jgamarra          #+#    #+#             */
/*   Updated: 2025/04/21 21:36:35 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(int argc, char **argv, char **envp)
{
    t_minishell minishell;
    char *input;
    char *line;
    struct cmd *cmd;
    int status;
    pid_t pid;

    /* Inicializamos y configuramos el minishell */
    prepare_minishell(&minishell);
    valid_inital_param(argc, envp, &minishell);
    catch_signal();

    /* Inicializamos el historial */
    minishell.history = history_create();
    load_history_file(minishell.history, ".minishell_history");

    while (1)
    {
        /* Leemos la entrada según el tipo de flujo (interactivo o no) */
        if (isatty(fileno(stdin)))
            line = readline("minishell$ ");
        else {
            line = get_next_line(fileno(stdin));
            if (!line)
                break;
            input = ft_strtrim(line, "\n");
            free(line);
        }

        if (!line)
        {
            printf("exit\n");
            save_history_file(minishell.history, ".minishell_history", 1000);
            history_free(minishell.history);
            break;
        }

        input = ft_strdup(line);
        free(line);

        while (incomplete_cmd(input))
        {
            line = readline("pipe> ");
            if (!line)
                break;
            char *tmp = ft_strjoin(input, line);
            free(input);
            free(line);
            input = tmp;
        }

        if (input[0] == '\0')
        {
            free(input);
            continue;
        }

        /* Manejo del historial */
        if (strncmp(input, "history", 7) != 0)
        {
            add_history(input);
            history_add(minishell.history, input);
        }
        else
        {
            char *arg = input + 7;
            while (*arg && ft_isspace((unsigned char)*arg))
                arg++;
            if (*arg != '\0')
                history_print(minishell.history, arg);
            else
                history_print(minishell.history, NULL);
            free(input);
            continue;
        }

        /* Parseamos el comando */
        input = check_input_valid(input);
        cmd = parsecmd(input);
        if (!cmd)
        {
            free(input);
            continue;
        }

        /* Ejecutamos el comando: si es builtin se ejecuta internamente, sino se hace fork */
        if (valid_builtins(cmd))
        {
            run_internal(cmd, &minishell);
        }
        else
        {
            pid = fork();
            if (pid == 0)
            {
                /* Proceso hijo: ejecutar el comando mediante runcmd() */
                runcmd(cmd, &minishell);
                exit(0);
            }
            /* Proceso padre: esperar y capturar el estado de salida */
            waitpid(pid, &status, 0);
            if (WIFEXITED(status))
                minishell.status = WEXITSTATUS(status);
        }

        free(input);
    }

    safe_free_minishell(&minishell);
    return 0;
}
