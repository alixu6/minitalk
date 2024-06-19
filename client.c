/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:17:15 by axu               #+#    #+#             */
/*   Updated: 2024/06/19 10:31:07 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

void	ft_char_to_bits(unsigned char ch, char *bits)
{
	int	k;

	k = 0;
	while (k < 8)
	{
		if (ch & (1 << (7 - k)))
			bits[k] = '1';
		else
			bits[k] = '0';
		k++;
	}
}

char	*ft_str_bits(char *str)
{
	char			*str_bits;
	int				i;
	int				j;

	i = 0;
	j = 0;
	str_bits = (char *)malloc(sizeof(char) * ((ft_strlen(str) * 8) + 8));
	if (str_bits == NULL)
		return (NULL);
	while (str[i])
	{
		ft_char_to_bits((unsigned char)str[i], &str_bits[j]);
		j = j + 8;
		i++;
	}
	str_bits[j] = '\0';
	return (str_bits);
}

void	ft_send_to_server(int id, char *str)
{
	int		i;
	char	*bits;

	i = 0;
	bits = ft_str_bits(str);
	if (!bits)
		return ;
	while (bits[i] != '\0')
	{
		if (bits[i] == '0')
			kill(id, SIGUSR1);
		else if (bits[i] == '1')
			kill(id, SIGUSR2);
		usleep(950);
		i++;
	}
	i = 0;
	while (i < 8)
	{
		kill(id, SIGUSR1);
		usleep(950);
		i++;
	}
	free(bits);
}

int	main(int argc, char *argv[])
{
	int		id;
	char	*str;

	if (argc != 3)
	{
		ft_printf("[ERROR] Expected output: ./client <PID> <MESSAGE>\n");
		return (0);
	}
	id = ft_atoi(argv[1]);
	if (!id)
	{
		ft_printf("[ERROR] Wrong PID!\n");
		return (0);
	}
	str = argv[2];
	if (!str || ft_strlen(str) == 0)
	{
		ft_printf("[ERROR] Empty message!\n");
		return (0);
	}
	ft_send_to_server(id, str);
	return (0);
}
