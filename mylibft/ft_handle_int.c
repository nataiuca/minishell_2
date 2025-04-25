/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:53:37 by natferna          #+#    #+#             */
/*   Updated: 2024/12/06 14:38:40 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_handle_int(int n)
{
	int		len;
	long	nb;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		len += ft_handle_char('-');
		if (len < 0)
			return (-1);
		nb = -nb;
	}
	len += ft_putnbr(nb);
	return (len);
}

int	ft_putnbr(long nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		if (len < 0)
			return (-1);
	}
	len += ft_handle_char(nb % 10 + '0');
	return (len);
}
