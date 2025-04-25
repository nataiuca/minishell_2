/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:57:20 by natferna          #+#    #+#             */
/*   Updated: 2024/09/28 23:05:39 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	get_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	int				len;
	unsigned int	num;

	len = get_length(n);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	num = n;
	if (n < 0)
	{
		num = -n;
		ptr[0] = '-';
	}
	while (num != 0)
	{
		ptr[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n == 0)
		ptr[0] = '0';
	return (ptr);
}
