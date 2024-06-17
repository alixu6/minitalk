/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:13:23 by axu               #+#    #+#             */
/*   Updated: 2024/03/05 13:07:36 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			last = (char *)s;
		}
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (last);
}

/*#include <string.h>
int	main(void)
{
	char a[] = "hello";
	printf("%s\n", ft_strrchr(a, 'l'));
	printf("%s", strrchr(a, 'l'));
	return (0);
}*/
