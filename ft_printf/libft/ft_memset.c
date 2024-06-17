/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:48:23 by axu               #+#    #+#             */
/*   Updated: 2024/02/23 18:34:23 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n > 0)
	{
		*a = c;
		a++;
		n--;
	}
	return (s);
}

/*#include <stdio.h>

int main()
{
	char str[] = "hello";
	printf("%s\n", str);
	ft_memset(str, 'y', 4);
	printf("%s", str);
	return (0);
}*/
