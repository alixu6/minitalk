/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:00:34 by axu               #+#    #+#             */
/*   Updated: 2024/03/12 18:45:30 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

static int	ft_count(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_utoa(unsigned int nb)
{
	int		len;
	char	*str;

	len = ft_count(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (nb == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str[len] = '\0';
	while (nb != 0)
	{
		str[len - 1] = nb % 10 + 48;
		nb = nb / 10;
		len --;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int d)
{
	int		len;
	char	*s;

	len = 0;
	s = ft_utoa(d);
	if (s == NULL)
		return (-1);
	len = ft_print_str(s);
	free(s);
	return (len);
}
