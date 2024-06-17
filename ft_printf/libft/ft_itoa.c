/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:36:39 by axu               #+#    #+#             */
/*   Updated: 2024/03/01 13:29:35 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count(int n)
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

static int	ft_sign(int n)
{
	int	sign;

	if (n < 0)
		sign = 1;
	else
		sign = 0;
	return (sign);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	int		sign;
	char	*str;

	nb = n;
	len = ft_count(nb);
	sign = ft_sign(nb);
	str = (char *)malloc(sizeof(char) * (len + sign + 1));
	if (str == NULL)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[len + sign] = '\0';
	while (len + sign > sign)
	{
		len--;
		str[len + sign] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(-452));
	printf("%s\n", ft_itoa(452));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0));
	return (0);
}*/
