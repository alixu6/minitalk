/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:30:00 by axu               #+#    #+#             */
/*   Updated: 2024/03/12 15:54:22 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_print_nbr(int nb)
{
	int		len;
	char	*nbr;

	len = 0;
	nbr = ft_itoa(nb);
	len = ft_print_str(nbr);
	free(nbr);
	return (len);
}
