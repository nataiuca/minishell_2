/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:56:25 by natferna          #+#    #+#             */
/*   Updated: 2024/09/29 00:37:39 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
	char		char_c;

	last = NULL;
	char_c = (char)c;
	while (*s)
	{
		if (*s == char_c)
		{
			last = s;
		}
		s++;
	}
	if (char_c == '\0')
	{
		last = s;
	}
	return ((char *)last);
}
