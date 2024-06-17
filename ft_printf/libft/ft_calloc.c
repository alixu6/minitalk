/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:38:49 by axu               #+#    #+#             */
/*   Updated: 2024/03/05 14:24:14 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb && size && nmemb > (UINT_MAX / size))
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return (arr);
}

/*#include <stdio.h>

int	main(void)
{
	int *array = (int *)ft_calloc(5, sizeof(int));
	if (array != NULL)
		printf("successful\n");
	else
		printf("failed\n");
	free(array);
	return (0);
}*/
