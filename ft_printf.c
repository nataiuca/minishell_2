/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:40:00 by natferna          #+#    #+#             */
/*   Updated: 2024/12/06 14:37:57 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_handle_format(const char *format, va_list args, int *i)
{
	int	len;

	len = 0;
	if (format[*i] == 'c')
		len = ft_handle_char(va_arg(args, int));
	else if (format[*i] == 's')
		len = ft_handle_str(va_arg(args, char *));
	else if (format[*i] == 'p')
		len = ft_handle_ptr(va_arg(args, void *));
	else if (format[*i] == 'd' || format[*i] == 'i')
		len = ft_handle_int(va_arg(args, int));
	else if (format[*i] == 'u')
		len = ft_handle_unsigned(va_arg(args, unsigned int));
	else if (format[*i] == 'x' || format[*i] == 'X')
		len = ft_handle_hex(va_arg(args, unsigned int), format[*i]);
	else if (format[*i] == '%')
		len = ft_handle_char('%');
	if (len == -1)
		return (-1);
	return (len);
}

static int	ft_handle_percent(const char *format, va_list args, int *i)
{
	int	ret;

	(*i)++;
	ret = ft_handle_format(format, args, i);
	return (ret);
}

int	ft_process_format(const char *format, va_list args)
{
	int	i;
	int	len;
	int	ret;

	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			ret = ft_handle_percent(format, args, &i);
			if (ret == -1)
				return (-1);
			len += ret;
		}
		else
		{
			ret = ft_handle_char(format[i]);
			if (ret == -1)
				return (-1);
			len += ret;
		}
		i++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = ft_process_format(format, args);
	va_end(args);
	return (len);
}
