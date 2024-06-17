/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:44:16 by axu               #+#    #+#             */
/*   Updated: 2024/02/23 18:39:08 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	j = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (s <= 0)
	{
		return (len);
	}
	while (src[i] != '\0' && j < s - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len);
}

/*#include <stdio.h>

int	main(void)
{
	char a[] = "hello world";
	char b[20];

	printf("%d\n", ft_strlcpy(b, a, -5));
	printf("%s\n", a);
	printf("%s", b);
	return (0);
}*/
