/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:14:36 by axu               #+#    #+#             */
/*   Updated: 2024/03/05 17:28:16 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static	size_t	ft_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (len > i && s[i] != '\0')
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	ft_free(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	if (arr)
	{
		while (i < len)
		{
			free(arr[i]);
			i++;
		}
		free(arr);
	}
}

static char	**ft_alloc(char const *s, char c)
{
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	const char	*word;
	char		**arr;

	i = 0;
	arr = ft_alloc(s, c);
	while (*s != '\0')
	{
		if (*s != c)
		{
			word = s;
			while (*s != c && *s != '\0')
				s++;
			arr[i] = ft_strndup(word, s - word);
			if (arr[i] == NULL)
				ft_free(arr, i);
			i++;
		}
		else
			s++;
	}
	arr[i] = NULL;
	return (arr);
}

/*#include <stdio.h>

int	main(void)
{
	int i;
	char a[] = "hello 42 students";
	char c = ' ';
	i = 0;
	char **str = ft_split(a, c);
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	free(str);
	return (0);
}*/
