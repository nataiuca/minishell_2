/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:53:33 by natferna          #+#    #+#             */
/*   Updated: 2025/05/29 00:51:02 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	history_clear(t_history *hist)
{
	int		i;
	char	*path;
	int		fd;

	if (!hist)
		return ;
	i = 0;
	while (i < hist->count)
	{
		free(hist->entries[i]);
		i++;
	}
	free(hist->entries);
	hist->entries = malloc(sizeof(char *) * hist->capacity);
	if (!hist->entries)
		return ;
	hist->count = 0;
	path = construct_history_path(HISTFILE_NAME);
	if (!path)
		return ;
	fd = open(path, O_WRONLY | O_TRUNC, 0644);
	if (fd < 0)
		return (perror("Error al limpiar el archivo de historial"), free(path));
	close(fd);
	free(path);
}

int	get_print_start(t_history *hist, const char *option)
{
	int	x;
	int	start;

	if (option == NULL)
		return (0);
	if (strcmp(option, "-c") == 0)
	{
		history_clear(hist);
		printf("Historial borrado.\n");
		return (-1);
	}
	if (option[0] == '-' && ft_isdigit((unsigned char)option[1]))
	{
		x = ft_atoi(option + 1);
		if (x > hist->count)
			x = hist->count;
		start = hist->count - x;
		return (start);
	}
	printf("Uso: history [-X] | history -c\n");
	return (-1);
}

void	history_print(t_history *hist, const char *option)
{
	int	i;
	int	start;

	if (!hist || hist->count == 0)
	{
		printf("Historial vacío.\n");
		return ;
	}
	start = get_print_start(hist, option);
	if (start == -1)
		return ;
	i = start;
	while (i < hist->count)
	{
		printf("%d  %s\n", i + 1, hist->entries[i]);
		i++;
	}
}

void	history_free(t_history *hist)
{
	int	i;

	if (!hist)
		return ;
	i = 0;
	while (i < hist->count)
	{
		free(hist->entries[i]);
		i++;
	}
	free(hist->entries);
	free(hist);
}
