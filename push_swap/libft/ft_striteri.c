/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 06:49:24 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/17 21:51:52 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	if (s)
	{
		index = 0;
		while (s[index])
		{
			(*f)(index, s + index);
			index++;
		}
	}
}

/*
void f(unsigned  int x, char *str)
{
    x = 10;
    str = "selam";
}

int main()
{
    char *str = "merhabalar";
    ft_striteri(str, f);
}
*/
