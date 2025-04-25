/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:42:15 by natferna          #+#    #+#             */
/*   Updated: 2024/09/28 23:10:59 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(char const *s, char c)
{
	int	f;
	int	count;
	int	i;

	count = 0;
	i = 0;
	f = 0;
	while (s[i])
	{
		if (s[i] == c)
			f = 0;
		else if (f == 0)
		{
			f = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_word(char const *str, char c)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_free(char **split, int i)
{
	while (i--)
		free(split[i]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	char	**dest;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	dest = (char **)malloc(sizeof(char *) * (ft_count(str, c) + 1));
	if (!dest)
		return (NULL);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			dest[i++] = ft_word(str, c);
			if (dest[i - 1] == NULL)
				return (ft_free(dest, i));
			while (*str && *str != c)
				str++;
		}
	}
	dest[i] = NULL;
	return (dest);
}
