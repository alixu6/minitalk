/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:33:53 by axu               #+#    #+#             */
/*   Updated: 2024/02/27 13:46:07 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;
	unsigned int	k;
	char			*new;

	i = 0;
	k = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (new == NULL)
		return (NULL);
	while (s1[i] != '\0')
		new[k++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		new[k++] = s2[i++];
	new[k] = '\0';
	return (new);
}

/*#include <stdio.h>

int	main(void)
{
	char a[] = "hello ";
	char b[] = "42 students!";
	printf("%s", ft_strjoin(a, b));
	return (0);
}*/
