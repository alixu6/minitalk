/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:42:26 by axu               #+#    #+#             */
/*   Updated: 2024/02/23 18:36:07 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const char		*s;
	unsigned int	i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char a[] = "hello world";
	char b[6];
	printf("%s\n", a);
	printf("%s\n", b);
	ft_memcpy(b, a, 8);
	printf("%s\n", a);
        printf("%s\n", b);
	return (0);
}*/
