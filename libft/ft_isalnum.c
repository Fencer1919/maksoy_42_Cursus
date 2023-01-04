/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:24:54 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/14 21:18:09 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int num)
{
	if (num >= 'A' && num <= 'Z')
		return (1);
	else if (num >= 'a' && num <= 'z')
		return (1);
	else if (num >= '0' && num <= '9')
		return (1);
	else
		return (0);
}

/*
int main()
{
    printf("%d", ft_isalnum("/"));
}
*/
