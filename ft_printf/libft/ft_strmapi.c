/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:36:54 by axu               #+#    #+#             */
/*   Updated: 2024/03/05 09:37:56 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*str;
	unsigned int	i;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	add(unsigned int index, char c)
{
	(void)index;
	return (c + 1);
}

#include <stdio.h>

int	main(void)
{
	char a[] = "hello";
	char *str = ft_strmapi(a, add);
	printf("%s\n", a);
	printf("%s", str);
	free(str);
	return (0);
}*/
