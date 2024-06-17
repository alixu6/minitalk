/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:25:35 by axu               #+#    #+#             */
/*   Updated: 2024/02/24 11:53:50 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strcpy(char *d, const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

char	*ft_strdup(const char *s)
{
	unsigned int	i;
	char			*d;

	i = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * i + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	return (ft_strcpy(d, s));
}

/*#include <stdio.h>
int main(void)
{
	char a[] = "hello 42 students";
	char *res = ft_strdup(a);
	printf("%s", ft_strdup(a));
	free (res);
	return (0);
}*/
