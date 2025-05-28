/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamarra <jgamarra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:14:24 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/24 22:10:34 by jgamarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_strcountchr(char *str, char chr)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] == chr)
			count++;
	}
	return (count);
}

/*
* Function to clean input param from spaces
* ' ' '\t' '\n' '\v' '\f' '\r'
* Return the cleaned string
*/
char	*trim_space_char(char *input)
{
	int		index;
	char	*tmp;
	char	*spaces;

	index = 0;
	spaces = " \t\n\v\f\r";
	while ((ft_isspace(input[0]) || ft_isspace(input[ft_strlen(input) - 1]))
		&& index <= 5)
	{
		tmp = ft_strtrim(input, &spaces[index]);
		free(input);
		input = tmp;
		index++;
	}
	return (input);
}

int	count_occurrences(char *str, char *old)
{
	int	count;
	int	oldlen;
	int	i;

	count = 0;
	oldlen = ft_strlen(old);
	i = 0;
	while (str[i])
	{
		if (ft_strncmp(&str[i], old, oldlen) == 0)
		{
			count++;
			i += oldlen;
		}
		else
			i++;
	}
	return (count);
}

char	*build_replaced_string(char *str, char *old, char *new, char *res)
{
	int		i;
	int		newlen;
	int		oldlen;

	i = 0;
	oldlen = ft_strlen(old);
	newlen = ft_strlen(new);
	while (*str)
	{
		if (ft_strncmp(str, old, oldlen) == 0)
		{
			ft_memcpy(&res[i], new, newlen);
			i += newlen;
			str += oldlen;
		}
		else
			res[i++] = *str++;
	}
	res[i] = '\0';
	return (res);
}

// Function to replace a string with another string
// the first value is the main string
// the second value is the string to be find and replaced
// the third value is the string to replace
char	*ft_strreplace(char *str, char *old, char *new)
{
	int		count;
	int		newlen;
	int		oldlen;
	int		totallen;
	char	*result;

	count = count_occurrences(str, old);
	oldlen = ft_strlen(old);
	newlen = ft_strlen(new);
	totallen = ft_strlen(str) + count * (newlen - oldlen);
	result = (char *)safe_malloc(totallen + 1);
	if (!result)
		return (NULL);
	return (build_replaced_string(str, old, new, result));
}

// Function to valid if a string has the open and 
// close of a quote or double quote
// Return true if the string is valid
bool	valid_quotes(char *input, char quote)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (input[++i])
	{
		if (input[i] == quote)
			count++;
	}
	if (count % 2 == 0)
		return (true);
	return (false);
}
