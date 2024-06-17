/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:28:26 by axu               #+#    #+#             */
/*   Updated: 2024/03/12 14:15:58 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

void	ft_hex_up_low(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		ft_hex_up_low(nb / 16, format);
		ft_hex_up_low(nb % 16, format);
	}
	else
	{
		if (nb < 10)
			ft_print_char(nb + 48);
		else
		{
			if (format == 'x')
				ft_print_char(nb + ('a' - 10));
			if (format == 'X')
				ft_print_char(nb + ('A' - 10));
		}
	}
}

int	ft_print_hex(unsigned int nb, const char format)
{
	int	len;

	len = ft_len(nb);
	if (nb == 0)
	{
		len = 1;
		ft_print_char('0');
	}
	else
	{
		ft_hex_up_low(nb, format);
	}
	return (len);
}
