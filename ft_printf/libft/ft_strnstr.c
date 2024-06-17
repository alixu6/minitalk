/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:37:01 by axu               #+#    #+#             */
/*   Updated: 2024/03/05 13:57:59 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
	{
		return ((char *) big);
	}
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}

/*#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char a[] = "hell 42 sthelloudents!";
	char b[] = "hallo";

	printf("%s\n", ft_strnstr(a, b, 30));
	printf("%s", strnstr(a, b, 30));
	return (0);
}*/
