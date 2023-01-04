/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 03:00:39 by maksoy            #+#    #+#             */
/*   Updated: 2022/09/02 03:33:45 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_catch(int x)
{
	int			sig;
	static int	bit = 7;
	static int	set = 0;

	sig = 0;
	if (x == SIGUSR1)
		sig = 1;
	else if (x == SIGUSR2)
		sig = 0;
	set += sig << bit;
	if (bit == 0)
	{
		ft_printf("%c", set);
		bit = 7;
		set = 0;
	}
	else
		bit--;
}

int	main(void)
{
	ft_printf("Server PID=%d\n", getpid());
	signal(SIGUSR1, ft_catch);
	signal(SIGUSR2, ft_catch);
	while (1)
		pause();
}
