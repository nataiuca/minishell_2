/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_message_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:56:11 by jgamarra          #+#    #+#             */
/*   Updated: 2025/03/12 19:57:49 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exit_message_fd(int fd, char *message, int code)
{
	ft_putstr_fd(message, fd);
	ft_putchar_fd('\n', fd);
	exit(code);
}
