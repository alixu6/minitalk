
#include "minitalk.h"

char	*ft_str_bits(char *str)
{
	char	*str_bits;
	int	i;
	unsigned char ch;
	int	j;
	int	k;
       
	i = 0;
	j = 0;
	str_bits = (char *)malloc(sizeof(char) * ((ft_strlen(str) * 8) + 8));
	if (str_bits == NULL)
		return (NULL);
	while (str[i])
	{
		ch = (unsigned char)str[i];
		k = -1;
		while (++k < 8)
		{
			if (ch & (1 << (7 - k)))
				str_bits[j++] = '1';
			else
				str_bits[j++] = '0';
		}
		i++;
	}
	str_bits[j] = '\0';
	return (str_bits);
}

void	ft_send_to_server(int id, char *str)
{
	int	i;
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
		usleep(1000);
		i++;
	}
	i = 0;
	while (i < 8)
	{
		kill(id, SIGUSR1);
		usleep(1000);
		i++;
	}
	free(bits);
}

int	main(int argc, char *argv[])
{
	int	id;
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

