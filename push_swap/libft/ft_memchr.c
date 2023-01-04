/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:42:40 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/15 06:33:56 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int chr, size_t n)
{
	unsigned char	ch;
	unsigned char	*sr;
	size_t			i;

	ch = (unsigned char)chr;
	sr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (sr[i] == ch)
			return ((void *)(&sr[i]));
		i++;
	}
	return (NULL);
}
