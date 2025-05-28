/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:13:26 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/25 19:21:26 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static char	**parse_path_from_envp(char **envp)
{
	int		i;
	char	**split;
	char	**values;

	i = 0;
	while (envp[i])
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
		{
			split = ft_split(envp[i], '=');
			if (!split || !split[1])
				return (NULL);
			values = ft_split(split[1], ':');
			safe_free_vector(split);
			return (values);
		}
		i++;
	}
	return (NULL);
}

static void	copy_envp_to_minishell(t_minishell *minishell, char **envp)
{
	int		count;
	int		i;

	count = 0;
	while (envp[count])
		count++;
	minishell->env = safe_malloc(sizeof(char *) * (count + 1));
	minishell->exported = safe_malloc(sizeof(int) * (count + 1));
	i = 0;
	while (i < count)
	{
		minishell->env[i] = ft_strdup(envp[i]);
		minishell->exported[i] = 1;
		i++;
	}
	minishell->env[i] = NULL;
	minishell->exported[i] = 0;
}

/*
* get PATH from envp and save it in minishell->list_path
*/
void	init_env(t_minishell *minishell, char **envp)
{
	minishell->path_env = parse_path_from_envp(envp);
	if (!minishell->path_env)
		ft_exit_message("Error: PATH not found in envp.\n", 1);
	copy_envp_to_minishell(minishell, envp);
}

char	*get_env_value(t_minishell *minishell, char *key)
{
	int	len;
	int	i;

	len = ft_strlen(key);
	i = 0;
	while (minishell->env[i])
	{
		if (ft_strncmp(minishell->env[i], key, len) == 0
			&& minishell->env[i][len] == '=')
			return (&minishell->env[i][len + 1]);
		i++;
	}
	return (NULL);
}

// valid if environmental variable exists in minishell->env or is new
int	env_exists(t_minishell *minishell, char *key)
{
	int	i;

	i = 0;
	while (minishell->env[i] && key)
	{
		if (ft_strncmp(minishell->env[i], key, ft_strlen(key)) == 0)
			if (minishell->env[i][ft_strlen(key)] == '='
				|| minishell->env[i][ft_strlen(key)] == '\0')
				return (1);
		i++;
	}
	return (0);
}
