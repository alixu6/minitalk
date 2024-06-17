/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:11:12 by axu               #+#    #+#             */
/*   Updated: 2024/03/05 13:35:58 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t s)
{
	size_t	i;
	size_t	i_len;
	size_t	j_len;
	size_t	remaining;

	j_len = 0;
	while (dest[j_len] != '\0' && j_len < s)
		j_len++;
	i_len = 0;
	while (src[i_len] != '\0')
		i_len++;
	remaining = 0;
	if (s > j_len)
		remaining = s - j_len - 1;
	i = 0;
	while (src[i] != '\0' && i < remaining)
	{
		dest[j_len + i] = src[i];
		i++;
	}
	if (j_len < s)
		dest[j_len + i] = '\0';
	return (j_len + i_len);
}

/*#include <stdio.h>

int	main(void)
{
	char a[] = "world";
	char b[] = "hello ";

	printf("%zu\n", ft_strlcat(b, a, 6));
	printf("%s", b);
	return (0);
}*/
