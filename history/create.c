/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:46:48 by natferna          #+#    #+#             */
/*   Updated: 2025/05/20 21:08:20 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

t_history	*history_create(void)
{
	t_history	*hist;

	hist = malloc(sizeof(t_history));
	if (!hist)
		return (NULL);
	hist->capacity = 16;
	hist->count = 0;
	hist->entries = malloc(sizeof(char *) * hist->capacity);
	if (!hist->entries)
	{
		free(hist);
		return (NULL);
	}
	return (hist);
}

void	write_history_lines(int fd, t_history *hist, int start)
{
	int		i;
	size_t	len;

	i = start;
	while (i < hist->count)
	{
		len = ft_strlen(hist->entries[i]);
		write(fd, hist->entries[i], len);
		write(fd, "\n", 1);
		i++;
	}
}
