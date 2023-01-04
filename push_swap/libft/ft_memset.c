/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:20:48 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/15 06:34:27 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int num, size_t byt)
{
	size_t	i;

	i = 0;
	while (i < byt)
	{
		((unsigned char *)str)[i] = num;
		i++;
	}
	return (str);
}
