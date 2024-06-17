
#include "minitalk.h"

void	ft_handle_signals(int signum)
{
	static int	bit = 0;
	static unsigned char c = 0;

	if (signum == SIGUSR2)
		c = c | (1 << (7 - bit));
	bit++;
	if (bit == 8)
	{
		if (c == '\0')
			ft_printf("\n");
		else
			ft_printf("%c", c);
		bit = 0;
		c = 0;
	}
}


int	main(void)
{
	ft_printf("The server's PID is : %d.\n", getpid());
	ft_printf("Waiting...\n");
	signal(SIGUSR1, ft_handle_signals);
	signal(SIGUSR2, ft_handle_signals);
	while (1)
		pause();
	return (0);
}
