/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:09:29 by jgamarra          #+#    #+#             */
/*   Updated: 2025/04/09 22:15:06 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
* get PATH from envp and save it in minishell->list_path
*/
void	init_env(t_minishell *minishell, char **envp)
{
	int		i;
	char	**path;
	char	**path_values;

	i = -1;
	while (envp[++i])
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
		{
			path = ft_split(envp[i], '=');
			path_values = ft_split(path[1], ':');
			safe_free_vector(path);
			break ;
		}
	}
	if (!path_values)
		ft_exit_message("Error: PATH not found in envp.\n", 1);
	minishell->path_env = path_values;
	// load envp and save it in minishell->env allocanting memory
	i = 0;
	while (envp[i])
		i++;
	minishell->env = safe_malloc(sizeof(char *) * (i + 1));
	minishell->exported = safe_malloc(sizeof(int) * (i + 1));
	i = -1;
	while (envp[++i])
	{
		if (!envp[i])
			minishell->env[i] = ft_strdup("");
		else
			minishell->env[i] = ft_strdup(envp[i]);	
		minishell->exported[i] = 1;
	}
	minishell->env[i] = NULL;
	minishell->exported[i] = 0;
	
	// minishell->env = envp;
}

char *get_env_value(t_minishell *minishell, char *key)
{
    int len = ft_strlen(key);
    for (int i = 0; minishell->env[i]; i++) {
        if (ft_strncmp(minishell->env[i], key, len) == 0 && minishell->env[i][len] == '=') {
            return &minishell->env[i][len + 1];
        }
    }
    return NULL;
}

void set_env_value(t_minishell *minishell, char *key, char *value, int exported)
{
    int len = ft_strlen(key);
	int len_value;
	
	if (!value)
		len_value = 0;
	else
		len_value = ft_strlen(value);
    for (int i = 0; minishell->env[i]; i++) {
        if (ft_strncmp(minishell->env[i], key, len) == 0 && minishell->env[i][len] == '=') {
            free(minishell->env[i]);

            // Allocate space for "key=value\0"
            int total_len = len + 1 + len_value + 1;
            minishell->env[i] = safe_malloc(total_len);

            // Manually build the string: key + '=' + value
            strcpy(minishell->env[i], key);
            strcat(minishell->env[i], "=");
			if (!value)
			{
				strcat(minishell->env[i], "");
				minishell->exported[i] = exported;
			}
			else
			{
				strcat(minishell->env[i], value);
				minishell->exported[i] = exported;
			}
            break ;
        }
    }
}

// create new environmental variable in minishell->env maintaining the old ones
void create_env_value(t_minishell *minishell, char *key, char *value, int exported)
{
	int i = 0;
	while (minishell->env[i])
		i++;
	char **new_env = safe_malloc(sizeof(char *) * (i + 2));
	int *new_exported = safe_malloc(sizeof(int) * (i + 2));
	i = -1;
	while (minishell->env[++i])
	{
		new_env[i] = minishell->env[i];
		new_exported[i] = minishell->exported[i];
	}
	new_env[i] = ft_strjoin(key, "=");
	if (!value)
	{
		new_env[i] = ft_strjoin(new_env[i], "");
		new_exported[i] = exported;
	}
	else
	{
		new_env[i] = ft_strjoin(new_env[i], value);
		new_exported[i] = exported;
	}
	new_env[i + 1] = NULL;
	new_exported[i + 1] = 1;
	free(minishell->env);
	free(minishell->exported);
	minishell->env = new_env;
	minishell->exported = new_exported;
}

// valid if environmental variable exists in minishell->env or is new
int env_exists(t_minishell *minishell, char *key)
{
	int i = 0;
	while (minishell->env[i])
	{
		if (ft_strncmp(minishell->env[i], key, ft_strlen(key)) == 0)
			if (minishell->env[i][ft_strlen(key)] == '=')
				return (1);
		i++;
	}
	return (0);
}

void remove_env_value(t_minishell *minishell, char *key)
{
	int i = 0;
	while (minishell->env[i])
	{
		if (ft_strncmp(minishell->env[i], key, ft_strlen(key)) == 0)
			if (minishell->env[i][ft_strlen(key)] == '=')
			{
				free(minishell->env[i]);
				while (minishell->env[i + 1])
				{
					minishell->env[i] = minishell->env[i + 1];
					i++;
				}
				minishell->env[i] = NULL;
				break ;
			}
		i++;
	}
}
