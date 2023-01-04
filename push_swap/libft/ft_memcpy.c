/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:08:33 by maksoy            #+#    #+#             */
/*   Updated: 2022/01/15 11:17:48 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t byt)
{
	size_t	i;
	char	*dst;
	char	*src;

	if (!dest && !source)
		return (NULL);
	i = 0;
	dst = (char *)dest;
	src = (char *)source;
	while (i < byt)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
