/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:11:30 by axu               #+#    #+#             */
/*   Updated: 2024/03/01 10:25:38 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			n = -n;
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(n, fd);
		}
	}
	else if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

/*int	main(void)
{
	ft_putnbr_fd(1234, 1);
	return (0);
}*/
