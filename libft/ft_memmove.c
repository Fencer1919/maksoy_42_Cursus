/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:55:17 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/07 18:58:46 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str_d, const void *str_s, size_t n)
{
	size_t			i;
	unsigned char	*str_dst;
	unsigned char	*str_src;

	if ((str_d == NULL ) && (str_s == NULL))
		return (NULL);
	str_dst = (unsigned char *)str_d;
	str_src = (unsigned char *)str_s;
	i = 1;
	if (str_src < str_dst)
	{
		while (i <= n)
		{
			str_dst[n - i] = str_src[n - i];
			i++;
		}
	}
	else
		ft_memcpy(str_dst, str_src, n);
	return (str_d);
}
