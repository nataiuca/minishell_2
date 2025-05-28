/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_impl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:17:59 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/25 19:18:27 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static char	*build_env_entry(char *key, char *value)
{
	char	*joined;
	char	*tmp;

	tmp = ft_strjoin(key, "=");
	if (!value)
		joined = ft_strdup(tmp);
	else
		joined = ft_strjoin(tmp, value);
	free(tmp);
	return (joined);
}

static int	env_key_matches(char *entry, char *key, int key_len)
{
	if (ft_strncmp(entry, key, key_len) != 0)
		return (0);
	if (entry[key_len] == '=' || entry[key_len] == '\0')
		return (1);
	return (0);
}

void	upd_env_value(t_minishell *mshell, char *key, char *value, int exported)
{
	int		i;
	int		key_len;
	char	*new_entry;

	key_len = ft_strlen(key);
	i = 0;
	while (mshell->env[i])
	{
		if (env_key_matches(mshell->env[i], key, key_len))
		{
			free(mshell->env[i]);
			new_entry = build_env_entry(key, value);
			mshell->env[i] = new_entry;
			mshell->exported[i] = exported;
			return ;
		}
		i++;
	}
}
