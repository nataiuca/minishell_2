/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:54:22 by natferna          #+#    #+#             */
/*   Updated: 2024/12/06 14:38:45 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <unistd.h>

int	ft_handle_ptr(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
	{
		len += write(1, "0x0", 3);
		return (len);
	}
	len += write(1, "0x", 2);
	if (len < 0)
		return (-1);
	len += ft_put_hex_ptr((uintptr_t)ptr);
	return (len);
}

int	ft_put_hex_ptr(uintptr_t num)
{
	char	*hex;
	int		len;

	hex = "0123456789abcdef";
	len = 0;
	if (num >= 16)
		len += ft_put_hex_ptr(num / 16);
	len += ft_handle_char(hex[num % 16]);
	return (len);
}
