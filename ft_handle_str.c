/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:55:13 by natferna          #+#    #+#             */
/*   Updated: 2024/12/06 14:38:50 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_handle_str(char *str)
{
	int	len;
	int	ret;

	len = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		ret = ft_handle_char(*str);
		if (ret < 0)
			return (-1);
		len += ret;
		str++;
	}
	return (len);
}
