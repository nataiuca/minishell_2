/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_impl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:45:13 by jgamarra          #+#    #+#             */
/*   Updated: 2025/04/21 21:07:25 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void run_internal(t_cmd *cmd, t_minishell *minishell)
{
	t_execcmd *ecmd;
	int idx;
	int pos;
	
	ecmd = (t_execcmd *)cmd;
	//print_vector(ecmd->argv);
	char quote=0;
	if (ft_strstr(ecmd->argv[0], "echo"))
	{
		// minishell->status = 0;
		// quote validator
		if (!is_valid_quote(cmd, minishell))
		{
			return ;
		}
		// char quote=0;
		// idx = 1;
		// while (ecmd->argv[idx])
		// {
		// 	pos = 0;
		// 	while (ecmd->argv[idx][pos])
		// 	{
		// 		if (!quote && (ecmd->argv[idx][pos] == '\'' || ecmd->argv[idx][pos] == '\"'))
		// 			quote = ecmd->argv[idx][pos];
		// 		else if (quote && ecmd->argv[idx][pos] == quote)
		// 			quote = 0;
		// 		pos++;
		// 	}
		// 	idx++;
		// }
		// if (quote)
		// {
		// 	write(2, "Error: Unmatched quote\n", 23);
		// }
		// quote validator
		
		// new line validator
		int new_line = 1;
		idx = 1;
		while (ecmd->argv[idx] && ft_strstr(ecmd->argv[idx], "-n"))
		{
			new_line = 0;
			idx++;
		}
		// new line validator

		// print echo
		if (!ecmd->argv[idx])
			write(1, "", 1);
		while (ecmd->argv[idx])
		{
			pos = 0;
			// printf("control: (%s)\n", ecmd->argv[idx]);
			while (ecmd->argv[idx][pos])
			{
				// control quote
				if (!quote && (ecmd->argv[idx][pos] == '\'' || ecmd->argv[idx][pos] == '\"'))
				{
					quote = ecmd->argv[idx][pos];
					pos++;
					continue ;
				}
				else if (quote && ecmd->argv[idx][pos] == quote)
				{
					quote = 0;
					pos++;
					continue ;
				}
				// control quote

				// control $
				if (quote != '\'' && ecmd->argv[idx][pos] == '$')
				{
					pos++;
					// control $?
					if (ecmd->argv[idx][pos] == '?')
					{
						write(1, ft_itoa(minishell->status), ft_strlen(ft_itoa(minishell->status)));
						pos++;
						continue ;	
					}
					// check if variable is valid. [a-zA-Z_] and not \ or "
					else if ((ft_isalnum(ecmd->argv[idx][pos]) || ecmd->argv[idx][pos] == '_') && ecmd->argv[idx][pos] != '\\' && ecmd->argv[idx][pos] != '"')
					{
						// printf("here\n");
						// EXPAND ENVIRONMENT VARIABLES
						// int variable = 0;
						// while (ecmd->argv[idx][pos + variable] && (ft_isalnum(ecmd->argv[idx][pos + variable]) || ecmd->argv[idx][pos + variable] == '_'))
						// 	variable++;
						// char *var = ft_substr(ecmd->argv[idx], pos, variable);
						// char *var_value = getenv(var);
						// if (var_value)
						// 	write(1, var_value, ft_strlen(var_value));
						// else
						// 	write(1, "", 1);// if variable not found print empty string
						// pos += variable;
						print_expand_variables(cmd, idx, &pos, minishell);
						continue ;
						// EXPAND ENVIRONMENT VARIABLES
					}
					else
					{
						// printf("here2: (%c)\n",ecmd->argv[idx][pos - 1]);
						// print previous value $
						write (1, &ecmd->argv[idx][pos - 1], 1);
						if (ecmd->argv[idx][pos] == '\\' || ecmd->argv[idx][pos] == '"')
						{
							continue ;
						}
						else
						{
							write (1, &ecmd->argv[idx][pos], 1);
							pos++;
							continue ;
						}
						// // not print quotes
						// if (!quote)
						// 	write (1, &ecmd->argv[idx][pos], 1);
						// // move to next value not current " $ "
						// if (quote)
						// 	pos++;
					}
				}
				// ignore "\"
				/*
				No interpretar comillas sin cerrar o caracteres especiales no especificados en el enunciado como \ (barra invertida) o ; (punto y coma).
				*/
				if (ecmd->argv[idx][pos] == '\\')
				{
					pos++;
					continue ;
				}
				// printf("here3: (%c)\n",ecmd->argv[idx][pos]);
				write(1, &ecmd->argv[idx][pos], 1);
				pos++;
			}
			// print if next element is not empty
			if (ecmd->argv[idx + 1])
				write(1, " ", 1);
			idx++;
		}
		if (new_line)
			write(1, "\n", 1);
		// print echo
		minishell->status = 0;
	}
	else if (ft_strstr(ecmd->argv[0], "pwd"))
	{
		char *pwd = getcwd(NULL, 0);
		if (!pwd)
		{
			printf("pwd: error retrieving current directory: getcwd: cannot access parent directories: No such file or directory\n");
			minishell->status = 1;
			return ;
		}
		write(1, pwd, ft_strlen(pwd));
		write(1, "\n", 1);
		free(pwd);
		minishell->status = 0;
	}
	else if (ft_strstr(ecmd->argv[0], "cd"))
	{
		char *move = NULL;
		char *tmp;
		if (!is_valid_quote(cmd, minishell))
		{
			return ;
		}

		// error if there is an option
		if (ecmd->argv[1][0] == '-')
		{
			printf("cd: options are not permitted: %s\n", ecmd->argv[1]);
			minishell->status = 1;
			return ;
		}
		
		idx = 1;
		while (ecmd->argv[idx] && idx==1)
		{
			pos = 0;
			// printf("ecmd->argv[idx][pos] %c\n", ecmd->argv[idx][pos]);
			while (ecmd->argv[idx][pos])
			{
				// control quote
				if (!quote && (ecmd->argv[idx][pos] == '\'' || ecmd->argv[idx][pos] == '\"'))
				{
					quote = ecmd->argv[idx][pos];
					pos++;
					continue ;
				}
				else if (quote && ecmd->argv[idx][pos] == quote)
				{
					quote = 0;
					pos++;
					continue ;
				}
				// control quote

				// control $
				if (quote != '\'' && ecmd->argv[idx][pos] == '$')
				{
					pos++;
					// control $?
					// check if variable is valid. [a-zA-Z_] and not \ or "
					if ((ft_isalnum(ecmd->argv[idx][pos]) || ecmd->argv[idx][pos] == '_') && ecmd->argv[idx][pos] != '\\' && ecmd->argv[idx][pos] != '"')
					{
						// loop through the end of the variable
						int se = pos;
						int es = pos;
						char *env;
						while (ecmd->argv[idx][se + es] && (ft_isalnum(ecmd->argv[idx][se + es]) || ecmd->argv[idx][se + es] == '_'))
							es++;
						tmp = ft_substr(ecmd->argv[idx], se, es);
						env = getenv_minishell(minishell, tmp);
						if (!move && env)
						{
							// not free env because is a pointer to the environment variable
							move = ft_strdup(env);
						}
						else if (move && env)
						{
							free(tmp);
							tmp = ft_strjoin(move, env);
							free(move);
							move = ft_strdup(tmp);
						}
						else
						{
							if (!move)
								move = ft_strdup("");
							else
							{
								free(tmp);
								tmp = ft_strdup(move);
								free(move);
								move = ft_strjoin(tmp, "");
							}
						}
						free(tmp);
						pos += es;
						// continue with next words
						continue ;
					}
					else
					{
						// error is not a valid argument after $
						printf("cd: No such file or directory\n");
						minishell->status = 1;
						return ;
					}
				}
				else if (quote != '\'')
				{
					if (!move)
					{
						move = ft_strjoin("", ft_substr(ecmd->argv[idx], pos, 1));
					}
					else
					{
						tmp = ft_strdup(move);
						free(move);
						move = ft_strjoin(tmp, ft_substr(ecmd->argv[idx], pos, 1));
						free(tmp);
					}
				}
				else 
				{
					// character not valid
					printf("cd: syntax error\n");
					minishell->status = 1;
					return ;
				}
				pos++;
			}
			idx++;
		}
		// printf("move: %s\n", move);
		// move directory
		if (chdir(move) != 0)
		{
			printf("cd: no such file or directory: %s\n", ecmd->argv[1]);
			minishell->status = 1;
			return ;
		}
		set_env_value(minishell, "OLDPWD", get_env_value(minishell, "PWD"), 1);
		set_env_value(minishell, "PWD", getcwd(NULL, 0), 1);
		free(move);
		minishell->status = 0;
	}
	else if (ft_strstr(ecmd->argv[0], "env"))
	{
		int i = 0;
		while (minishell->env[i] && minishell->exported[i])
		{
			write(1, minishell->env[i], ft_strlen(minishell->env[i]));
			write(1, "\n", 1);
			i++;
		}
		minishell->status = 0;
	}
	else if (ft_strstr(ecmd->argv[0], "exit"))
	{
		if (!ecmd->argv[2])
		{
			idx = 0;
			// exit with a specific value
			if (ecmd->argv[1])
			{
				printf("exit\n");
				minishell->status = ft_atoi(ecmd->argv[1]) % 256;
				while (ecmd->argv[1][idx])
				{
					if (!ft_isdigit(ecmd->argv[1][idx]))
					{
						printf("exit: numeric argument required\n");
						minishell->status = 255;
						break ;
					}
					idx++;
				}
			}
			// exit with last state of the program
			exit(minishell->status);
		}
		else
		{
			printf("exit: too many arguments\n");
			minishell->status = 1;
			// return ;
		}
	}
	else if (ft_strstr(ecmd->argv[0], "export"))
	{
		idx = 1;
		
		if (!ecmd->argv[idx])
		{
			// print all environment variables sorted
			printf("declare -x \n");
		}
		while (ecmd->argv[idx])
		{
			// valid if quote is valid
			if (!is_valid_quote(cmd, minishell))
				return ;
			ecmd->argv[idx] = expand_variables(ecmd->argv[idx], minishell);
			// remove quotes if exists
			remove_quotes(ecmd, idx);
			// check if value is valid
			int s = -1;
			char **q;
			char *arge[3];
			int argc = 0;
			q = &ecmd->argv[idx];
			int exported = 0;
			while (ecmd->argv[idx][++s])
			{
				if (s == 0 && ft_isalpha(ecmd->argv[idx][s]) || ecmd->argv[idx][s] == '_')
				{
					if (ecmd->argv[idx][s + 1])
						continue ;
				}
				else if (s != 0 && ft_isalnum(ecmd->argv[idx][s]) || ecmd->argv[idx][s] == '_')
				{
					if (ecmd->argv[idx][s + 1])
						continue ;
				}
				else
				{
					if (s != 0 && ecmd->argv[idx][s] == '=')
					{
						ecmd->argv[idx][s] = 0;
						arge[argc++] = *q;
						*q = *q + s + 1;
						exported = 1;
						while (ecmd->argv[idx][++s])
							;					
						if (!ecmd->argv[idx][s + 1])
							arge[argc++] = *q;
						break ;
					}
					// print error if variable is not valid
					printf("export: `%s': not a valid identifier\n", ecmd->argv[idx]);
					minishell->status = 1;
					return ;
				}
				
			}
			arge[argc] = 0;

			// check if variable already exists
			if (env_exists(minishell, arge[0]))
			{
				//update variable if already exists
				set_env_value(minishell, arge[0], arge[1], exported);
			}
			else
			{
				//add variable to environment
				create_env_value(minishell, arge[0], arge[1], exported);
			}
			idx++;	
		}
		minishell->status = 0;
	}
	else if (ft_strstr(ecmd->argv[0], "unset"))
	{
		// TODO Valid no options
		idx = 1;
		while (ecmd->argv[idx])
		{
			// valid if quote is valid
			if (!is_valid_quote(cmd, minishell))
				return ;
			ecmd->argv[idx] = expand_variables(ecmd->argv[idx], minishell);
			// remove quotes if exists
			remove_quotes(ecmd, idx);
			
			
			// check if value is valid
			int s = -1;
			while (ecmd->argv[idx][++s])
			{
				if (s == 0 && ft_isalpha(ecmd->argv[idx][s]) || ecmd->argv[idx][s] == '_')
				{
					if (ecmd->argv[idx][s + 1])
						continue ;
				}
				else if (s != 0 && ft_isalnum(ecmd->argv[idx][s]) || ecmd->argv[idx][s] == '_')
				{
					if (ecmd->argv[idx][s + 1])
						continue ;
				}
				else
				{
					// print error if variable is not valid
					printf("unset: `%s': not a valid identifier\n", ecmd->argv[idx]);
					minishell->status = 1;
					return ;
				}
				
			}
			// remove variable from environment
			remove_env_value(minishell, ecmd->argv[idx]);
			idx++;
		}
		minishell->status = 0;
	}
	// free all variables from ecmd
}

void run_external(t_cmd *cmd, t_minishell *minishell)
{
	int status;
	pid_t pid;

	if((pid = fork1()) == 0)
	{
		runcmd(cmd, minishell);
	}
	waitpid(pid, &status, 0);
	if (WIFEXITED(status))
	{
		minishell->status = WEXITSTATUS(status);
	}
}
