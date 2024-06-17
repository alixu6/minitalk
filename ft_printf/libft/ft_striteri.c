/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:38:34 by axu               #+#    #+#             */
/*   Updated: 2024/03/05 09:38:57 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*s != '\0')
	{
		f(i, s);
		s++;
		i++;
	}
}

/*void print_i_c(unsigned int i, char *c)
{
	printf("%d %c\n", i, *c);
}

int main(void)
{
	char a[] = "hello";
	ft_striteri(a, &print_i_c);
	return (0);
}*/
