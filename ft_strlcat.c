/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:42:29 by natferna          #+#    #+#             */
/*   Updated: 2024/09/28 23:10:07 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	j = 0;
	k = 0;
	while (dst[j] && j < (unsigned int)size)
		j++;
	while (src[k])
		k++;
	if (size == 0)
		return (ft_strlen((char *)src));
	i = 0;
	if (size - j == 0)
		return (j + ft_strlen((char *)src));
	while (src[i] && i < ((unsigned int)size - j - 1))
	{
		dst[i + j] = src[i];
		++i;
	}
	dst[i + j] = '\0';
	return (j + k);
}
