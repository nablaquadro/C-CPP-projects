/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:10:34 by aceremig          #+#    #+#             */
/*   Updated: 2022/05/19 13:10:40 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

static void	handler(int sig, siginfo_t *siginf, void *ptr)
{
	static unsigned char	c = 0;
	static int				i = 0;
	int						client_pid;

	(void)ptr;
	c |= (sig == SIGUSR2);
	client_pid = siginf->si_pid;
	if (i++ == 8)
	{
		if (!c)
		{
			usleep(300);
			kill(siginf->si_pid, SIGUSR2);
			c = 0;
			i = 0;
			return ;
		}
		ft_putchar_fd(c, 1);
		c = 0;
		i = 0;
	}
	else
		c <<= 1;
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = handler;
	ft_putnbr_fd((int)getpid(), 1);
	ft_putchar_fd('\n', 1);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
}
