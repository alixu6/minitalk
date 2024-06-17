/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:29:00 by axu               #+#    #+#             */
/*   Updated: 2024/03/05 15:07:08 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*sub;
	size_t	sub_len;
	size_t	i;

	s_len = 0;
	if (s == NULL)
		return (NULL);
	while (s[s_len] != '\0')
		s_len++;
	if (start >= s_len)
		return (ft_calloc(1, 1));
	if (len < (s_len - start))
		sub_len = len;
	else
		sub_len = s_len - start;
	sub = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (sub == NULL)
		return (NULL);
	i = -1;
	while (++i < sub_len)
		sub[i] = s[start + i];
	sub[sub_len] = '\0';
	return (sub);
}

/*#include <stdio.h>

int	main(void)
{
	char a[] = "hello 42 students!";

	char *res = ft_substr(a, 2, 1);
	printf("%s", res);
	free (res);
	return (0);
}*/
