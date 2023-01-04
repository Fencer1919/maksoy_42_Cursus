/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 02:59:58 by maksoy            #+#    #+#             */
/*   Updated: 2022/09/02 03:00:05 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(char *str)
{
	int	i;

	i = 0;
	while (*str)
		i = (i * 10) + (*str++ - '0');
	return (i);
}

void	ft_procces(int pid, int c)
{
	int				n;
	int				byt;
	unsigned char	ch;

	ch = c;
	byt = 8;
	n = 128;
	while (byt--)
	{
		if (ch / n)
		{
			ch -= n;
			kill(pid, SIGUSR1);
		}
		else
			kill(pid, SIGUSR2);
		usleep(50);
		n /= 2;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	int		i;
	char	*msg;

	pid = ft_atoi(argv[1]);
	i = 0;
	if (argc != 3)
	{
		ft_printf("You failed.\n");
		return (0);
	}
	msg = argv[2];
	while (msg[i])
	{
		ft_procces(pid, msg[i]);
		i++;
	}
}
