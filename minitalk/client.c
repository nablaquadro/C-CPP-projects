/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:10:30 by aceremig          #+#    #+#             */
/*   Updated: 2022/05/19 13:10:42 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	num;

	num = 0;
	while (*str)
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (num);
}

void	send(char **argv)
{
	char	*t_send;
	int		pid;
	int		i;

	i = 8;
	t_send = argv[2];
	pid = ft_atoi(argv[1]);
	while (*t_send)
	{
		i = 8;
		while (i >= 0)
		{
			if (*t_send >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			i--;
			usleep(100);
		}
		t_send++;
	}
}

static void	handler(int sig)
{
	int	i;

	i = sig;
	write(1, "ricezione messaggio confermata", 30);
	exit(0);
}

int	main(int argc, char **argv)
{
	int					i;

	i = 0;
	if (argc < 3)
	{
		write(1, "errore", 7);
		return (0);
	}
	send(argv);
	while (i <= 8)
	{
		kill(ft_atoi(argv[1]), SIGUSR1);
		i++;
		usleep(200);
	}
	signal(SIGUSR2, handler);
	while (1)
		pause();
}
