/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:19:25 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/25 19:20:11 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	count_env(char **env)
{
	int	i;

	i = 0;
	while (env[i])
		i++;
	return (i);
}

static void	copy_env_data(t_minishell *m, char **dst, int *dst_exp, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		dst[i] = m->env[i];
		dst_exp[i] = m->exported[i];
		i++;
	}
}

void	new_env_value(t_minishell *mshell, char *key, char *value, int exported)
{
	int		count;
	char	**new_env;
	int		*new_exported;
	char	*tmp;

	count = count_env(mshell->env);
	new_env = safe_malloc(sizeof(char *) * (count + 2));
	new_exported = safe_malloc(sizeof(int) * (count + 2));
	copy_env_data(mshell, new_env, new_exported, count);
	if (exported)
		tmp = ft_strjoin(key, "=");
	else
		tmp = ft_strjoin(key, "");
	if (!value)
		new_env[count] = ft_strjoin(tmp, "");
	else
		new_env[count] = ft_strjoin(tmp, value);
	free(tmp);
	new_exported[count] = exported;
	new_env[count + 1] = NULL;
	new_exported[count + 1] = 0;
	free(mshell->env);
	free(mshell->exported);
	mshell->env = new_env;
	mshell->exported = new_exported;
}

void	remove_env_value(t_minishell *minishell, char *key)
{
	int		i;
	size_t	key_len;

	i = 0;
	key_len = ft_strlen(key);
	while (minishell->env[i])
	{
		if (ft_strncmp(minishell->env[i], key, key_len) == 0)
		{
			if (minishell->env[i][key_len] == '=')
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
		}
		i++;
	}
}
