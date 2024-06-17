/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:47:43 by axu               #+#    #+#             */
/*   Updated: 2024/03/05 17:42:36 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_checkset(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_newlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		start;
	int		end;
	int		i;
	char	*cop_s1;

	len = ft_newlen(s1);
	start = 0;
	end = len - 1;
	i = 0;
	if (!s1)
		return (NULL);
	while (s1[start] != '\0' && ft_checkset(set, s1[start]))
		start++;
	while (end >= start && ft_checkset(set, s1[end]))
		end--;
	cop_s1 = (char *)malloc(sizeof(char) * (end - start + 2));
	if (cop_s1 == NULL)
		return (NULL);
	while (start <= end)
		cop_s1[i++] = s1[start++];
	cop_s1[i] = '\0';
	return (cop_s1);
}

/*#include <stdio.h>

int	main(void)
{
	char a[] = " hello! ";
	char b[] = "sfdf";
	
	printf("%d\n", ft_newlen(a));

	printf("%s", ft_strtrim(a, b));
	return (0);
}*/
