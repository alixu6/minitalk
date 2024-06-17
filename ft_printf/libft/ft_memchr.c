/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:38:34 by axu               #+#    #+#             */
/*   Updated: 2024/03/05 11:29:31 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int			i;
	const unsigned char		*str;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*#include <string.h>
int	main(void)
{
	char a[] = "hello";
	void *result_ft_memchr = ft_memchr(a, 'o', 3);
	printf("%s\n", (char *)result_ft_memchr);
	void *result_memchr = memchr(a, 'o', 3);
	printf("%s", (char *)result_memchr);
	return (0);
}*/
