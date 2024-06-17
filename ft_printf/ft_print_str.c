/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:28:13 by axu               #+#    #+#             */
/*   Updated: 2024/03/12 18:54:15 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_print_str(char *s)
{
	int	len;

	len = 0;
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (s[len] != '\0')
	{
		write(1, &s[len], 1);
		len++;
	}
	return (len);
}
