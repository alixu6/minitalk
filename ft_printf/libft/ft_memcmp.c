/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:37:41 by axu               #+#    #+#             */
/*   Updated: 2024/02/23 18:48:07 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((int)str1[i] - (int)str2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[] = "hello";
	char b[] = "hella";
	printf("%d\n", ft_memcmp(a, b, 1));
	printf("%d", memcmp(a, b, 1));
	return (0);
}*/
