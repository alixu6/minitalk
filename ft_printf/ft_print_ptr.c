/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:27:52 by axu               #+#    #+#             */
/*   Updated: 2024/03/12 18:57:51 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_len(unsigned long int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

static void	ft_convert_hexa(unsigned long int nb)
{
	if (nb >= 16)
	{
		ft_convert_hexa(nb / 16);
		ft_convert_hexa(nb % 16);
	}
	else
	{
		if (nb < 10)
			ft_print_char(nb + 48);
		else
			ft_print_char(nb + ('a' - 10));
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = 2;
	if (ptr == 0)
	{
		len = 5;
		write(1, "(nil)", 5);
	}
	else
	{
		write(1, "0x", 2);
		ft_convert_hexa(ptr);
		len = len + ft_len(ptr);
	}
	return (len);
}
