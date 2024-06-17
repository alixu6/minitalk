/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:03:02 by axu               #+#    #+#             */
/*   Updated: 2024/03/19 11:18:35 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

static int	ft_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = len + ft_print_char(va_arg(args, int));
	else if (format == 's')
		len = len + ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		len = len + ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		len = len + ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		len = len + ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len = len + ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len = len + ft_print_percent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len = len + ft_format(args, str[i + 1]);
			i++;
		}
		else
			len = len + ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
