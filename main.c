/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:34:17 by jgamarra          #+#    #+#             */
/*   Updated: 2025/04/20 00:00:06 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(int argc, char **argv, char **envp)
{
    t_minishell minishell;
    char        *input;
    char        *line;
    struct cmd  *cmd;

    // Inicializamos y configuramos el minishell
    prepare_minishell(&minishell);
    valid_inital_param(argc, envp, &minishell);
    catch_signal();

    // Inicializamos el historial
    minishell.history = history_create();
    load_history_file(minishell.history, ".minishell_history");

    while (1)
    {
        // Leemos la entrada según el tipo de flujo (interactivo o no)
        if (isatty(fileno(stdin)))
            line = readline("minishell$ ");
        else
        {
            line = get_next_line(fileno(stdin));
            if (!line)
                break;
            input = ft_strtrim(line, "\n");
            free(line);
        }

        // Si la entrada es NULL, salimos
        if (!line) {
            printf("exit\n");
            save_history_file(minishell.history, ".minishell_history", 1000);
            history_free(minishell.history);
            break;
        }

        // Procesamos el input inicial y verificamos comandos incompletos
        input = ft_strdup(line);
        free(line);

        while (incomplete_cmd(input)) {
            line = readline("pipe> ");
            if (!line)
                break;
            char *tmp = ft_strjoin(input, line);
            free(input);
            free(line);
            input = tmp;
        }

        // Si el input está vacío, pasamos al siguiente ciclo
        if (input[0] == '\0') {
            free(input);
            continue;
        }

        // Manejo de historial
        if (strncmp(input, "history", 7) != 0) {
            add_history(input);
            history_add(minishell.history, input);
        } else {
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

        // Parseamos el comando
        input = check_input_valid(input);
        cmd = parsecmd(input);

        // Detectar y ejecutar builtins directamente en el proceso principal
        if (valid_builtins(cmd)) {
            prepare_builtins(cmd, &minishell);
        } else {
            // Para comandos no builtins, hacemos fork y ejecutamos runcmd
            if (fork() == 0) {
                runcmd(cmd, &minishell);
                exit(0);
            }
            wait(NULL);
        }

        // Liberar memoria y pasar al siguiente ciclo
        free(input);
    }
    safe_free_minishell(&minishell);
    return 0;
}
