/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:28:20 by axu               #+#    #+#             */
/*   Updated: 2024/02/23 18:35:21 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n > 0)
	{
		*a = '\0';
		a++;
		n--;
	}
}

/*#include <stdio.h>
int	main()
{
	char str[] = "hello";
	printf("%s\n", str);
	ft_bzero(str, 4);
	printf("%s", str);
	return (0);
}*/
