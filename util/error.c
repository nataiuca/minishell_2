/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:17:15 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/06 19:42:42 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	export_error(char *argument, t_minishell *minishell)
{
	ft_putstr_fd(PROMPT_ERROR, STDERR_FILENO);
	ft_putstr_fd("export: '", STDERR_FILENO);
	ft_putstr_fd(argument, STDERR_FILENO);
	ft_putstr_fd("': not a valid identifier\n", STDERR_FILENO);
	minishell->status = 1;
}

void	unset_error(char *argument, t_minishell *minishell)
{
	ft_putstr_fd(PROMPT_ERROR, STDERR_FILENO);
	ft_putstr_fd("unset: '", STDERR_FILENO);
	ft_putstr_fd(argument, STDERR_FILENO);
	ft_putstr_fd("': not a valid identifier\n", STDERR_FILENO);
	minishell->status = 1;
}
