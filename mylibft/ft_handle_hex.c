/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:52:59 by natferna          #+#    #+#             */
/*   Updated: 2024/12/06 14:38:34 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_handle_hex(unsigned int n, char format)
{
	int	len;

	len = 0;
	if (format == 'x')
		len += ft_put_hex(n, "0123456789abcdef");
	else
		len += ft_put_hex(n, "0123456789ABCDEF");
	return (len);
}

int	ft_put_hex(unsigned int n, char *base)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_put_hex(n / 16, base);
	if (len < 0)
		return (-1);
	len += ft_handle_char(base[n % 16]);
	return (len);
}
