/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 06:39:31 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/26 22:49:29 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	index;

	index = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		index = n * -1;
	}
	else
		index = n;
	if (index > 9)
		ft_putnbr_fd(index / 10, fd);
	ft_putchar_fd(index % 10 + '0', fd);
}
