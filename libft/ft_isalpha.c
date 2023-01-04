/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 22:00:34 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/14 21:18:28 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int num)
{
	if (num >= 65 && num <= 90)
		return (1);
	else if (num >= 97 && num <= 122)
		return (1);
	else
		return (0);
}

/*
int main()
{
    printf("%d", ft_isalpha("maksoy2"));
}
*/
