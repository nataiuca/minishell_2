/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_controller.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:39:59 by jgamarra          #+#    #+#             */
/*   Updated: 2025/04/20 00:16:11 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int valid_builtins(t_cmd *cmd)
{
	t_execcmd *ecmd;
	ecmd = (t_execcmd *)cmd;
	
	return (ft_strstr(ecmd->argv[0], "echo")||
			ft_strstr(ecmd->argv[0], "cd")||
			ft_strstr(ecmd->argv[0], "pwd")||
			ft_strstr(ecmd->argv[0], "export")||
			ft_strstr(ecmd->argv[0], "unset")||
			ft_strstr(ecmd->argv[0], "env")||
			ft_strstr(ecmd->argv[0], "exit"));
}

t_cmd *prepare_builtins(t_cmd *cmd, t_minishell *minishell) {
    t_execcmd *ecmd;

    ecmd = (t_execcmd *)cmd;
    if (ft_strstr(ecmd->argv[0], "echo")) {
		int idx = 1;
		while (ecmd->argv[idx]) {
			char *expanded = expand_variables(ecmd->argv[idx], minishell);
			write(1, expanded, ft_strlen(expanded));
			if (ecmd->argv[idx + 1])
				write(1, " ", 1); // Añadir espacio entre argumentos
			idx++;
		}
		write(1, "\n", 1);
		return cmd;
	} else if (ft_strstr(ecmd->argv[0], "cd")) {
        // Manejar el comando "cd"
        if (ecmd->argv[1] == NULL) {
            chdir(getenv("HOME")); // Cambiar al directorio HOME si no hay argumentos
        } else if (chdir(ecmd->argv[1]) != 0) {
            perror("cd");
        }
        return cmd;
    } else if (ft_strstr(ecmd->argv[0], "pwd")) {
        // Manejar el comando "pwd"
        char cwd[1024];
        if (getcwd(cwd, sizeof(cwd)) != NULL) {
            write(1, cwd, ft_strlen(cwd));
            write(1, "\n", 1);
        } else {
            perror("pwd");
        }
        return cmd;
    } else if (ft_strstr(ecmd->argv[0], "export")) {
        // Manejar el comando "export"
        int idx = 1;
        while (ecmd->argv[idx]) {
            putenv(ecmd->argv[idx]); // Añadir variables de entorno
            idx++;
        }
        return cmd;
    } else if (ft_strstr(ecmd->argv[0], "unset")) {
        // Manejar el comando "unset"
        int idx = 1;
        while (ecmd->argv[idx]) {
            unsetenv(ecmd->argv[idx]); // Eliminar variables de entorno
            idx++;
        }
        return cmd;
    } else if (ft_strstr(ecmd->argv[0], "env")) {
        // Manejar el comando "env"
        char **env = minishell->env;
        while (*env) {
            write(1, *env, ft_strlen(*env));
            write(1, "\n", 1);
            env++;
        }
        return cmd;
    } else if (ft_strstr(ecmd->argv[0], "exit")) {
        // Manejar el comando "exit"
        exit(0);
    }
    return cmd; // Si no es un builtin, devolver el comando sin cambios
}


t_cmd *prepare_builtins_old(t_cmd *cmd, t_minishell *minishell)
{
	int internal;
	t_execcmd *ecmd;
	t_echocmd *echo;

	internal = 1;
	ecmd = (t_execcmd *)cmd;
	if (ft_strstr(ecmd->argv[0], "echo"))
	{
		echo = (t_echocmd *)cmd;
		echo->type = ECHO;
		echo->new_line = false;
		echo->simple_quote = false;
		echo->double_quote = false;
		echo->invalid = false;
		
		int vectorlen = ft_vector_size(ecmd->argv);
		int vectorindex = 0;
		// remove extra -n TODO
		
		int index = 0;
		char quote;
		if (vectorlen > 1)
		{
			while (ecmd->argv[++vectorindex])
			{
				//valid if the element is "-n" and skip if it repeat in the next element
				if (ft_strstr(ecmd->argv[vectorindex], "-n"))
				{
					//change value to empty string
					while (ecmd->argv[vectorindex] && ft_strstr(ecmd->argv[vectorindex], "-n"))
					{
						ecmd->argv[vectorindex] = "";
						echo->new_line = true;
						vectorindex++;
					}
					if (ecmd->argv[vectorindex] != 0)
						continue ;
					else
						break ;
				}
				index = 0;
				while(ecmd->argv[vectorindex][index] && (ecmd->argv[vectorindex][index] == '\'' || ecmd->argv[vectorindex][index++] == '\"'))
					;
				quote = ecmd->argv[vectorindex][index++];
				if (quote == '\'' || quote == '\"')
				{
					while(ecmd->argv[vectorindex][index] && ecmd->argv[vectorindex][index++] == quote)
						;
					if (quote != ecmd->argv[vectorindex][index])
					{
						echo->invalid = true;
						printf("Error: Invalid quotes\n");
						minishell->status = 1;
						break ;
					}
				}
				
			}
		}
		else
		{
			ecmd->argv[1] = "";
		}
		
		// if (vectorlen > 1)
		// {
		// 	// valid quotes
		// 	print_vector(ecmd->argv);
		// 	while (ecmd->argv[++vectorindex])
		// 	{
		// 		if (ft_strchr(ecmd->argv[vectorindex], '\'') && !echo->double_quote)
		// 		{
		// 			if (valid_quotes(ecmd->argv[vectorindex], '\'') && !echo->double_quote)
		// 			{
		// 				ecmd->argv[vectorindex] = ft_strtrim(ecmd->argv[vectorindex], "\'");
		// 				echo->simple_quote = true;
		// 			}
		// 			else
		// 			{
		// 				printf("Error: Invalid quotes\n");
		// 				echo->invalid = true;
		// 				break ;
		// 			}
		// 		}
		// 		if (ft_strchr(ecmd->argv[vectorindex], '\"') && !echo->simple_quote)
		// 		{
		// 			if (valid_quotes(ecmd->argv[vectorindex], '\"') && !echo->simple_quote)
		// 			{
		// 				ecmd->argv[vectorindex] = ft_strtrim(ecmd->argv[vectorindex], "\"");
		// 				echo->double_quote = true;
		// 			}
		// 			else
		// 			{
		// 				printf("Error: Invalid quotes\n");
		// 				echo->invalid = true;
		// 				break ;
		// 			}
		// 		}
		// 		// valid symbol $?
		// 		if (ft_strstr(ecmd->argv[vectorindex], "$?") && echo->simple_quote == false)
		// 		{
		// 			// replace the character $? with a value
		// 			printf("replace character\n");
		// 			ecmd->argv[vectorindex] = ft_strreplace(ecmd->argv[vectorindex], "$?", ft_itoa(minishell->status));
		// 		}
		// 	}
		// }
		// // print_vector(ecmd->argv);
		return((t_cmd *)echo);
	}
	else if (ft_strstr(ecmd->argv[0], "cd"))
	{
		// ft_cd(ecmd->argv, ecmd->minishell);
		exit(0);
	}
	else if (ft_strstr(ecmd->argv[0], "pwd"))
	{
		// ft_pwd();
		exit(0);
	}
	else if (ft_strstr(ecmd->argv[0], "export"))
	{
		// ft_export(ecmd->argv, ecmd->minishell);
		exit(0);
	}
	else if (ft_strstr(ecmd->argv[0], "unset"))
	{
		// ft_unset(ecmd->argv, ecmd->minishell);
		exit(0);
	}
	else if (ft_strstr(ecmd->argv[0], "env"))
	{
		// ft_env(ecmd->minishell->env);
		exit(0);
	}
	// else if (ft_strstr(ecmd->argv[0], "exit"))
	// {
	// 	// ft_exit(ecmd->minishell->env);
	// 	exit(0);
	// }
	return (cmd);
}

