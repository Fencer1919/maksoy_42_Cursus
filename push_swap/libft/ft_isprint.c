/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 22:49:25 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/14 21:21:10 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int num)
{
	if (num >= ' ' && num <= '~')
		return (1);
	else
		return (0);
}

/*
int main()
{
    int x = 'k';
    int y = '8';
    int z = '\t';
    int v = ' ';
    printf("%d", ft_isprint(x));
    printf("%d", ft_isprint(y));
    printf("%d", ft_isprint(z));
    printf("%d", ft_isprint(v));
}
*/
