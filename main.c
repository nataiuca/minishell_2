/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:34:17 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/29 01:07:06 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	check_leaks(void)
{
	system("leaks minishell");
}

int	main(int argc, char **argv, char **envp)
{
	t_minishell	ms;
	char		*input;

	prepare_minishell(&ms);
	valid_inital_param(argc, envp, &ms);
	disable_echoctl();
	catch_signal();
	init_history(&ms);
	input = get_input(&ms);
	while (input)
	{
		input = get_input(&ms);
		ms.error_syntax = false;
		catch_interactive(&ms, input, "minishell$");
		input = check_input_valid(input);
		if (*input)
		{
			save_history_file(&ms, input);
			control_cmd(parsecmd(input, &ms), &ms);
		}
		free(input);
	}
	safe_free_minishell(&ms);
	return (0);
}
