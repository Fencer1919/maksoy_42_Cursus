/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:14:33 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/17 22:11:52 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *src_d, const char *src_s, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n != 0)
	{
		while (src_s[i] != '\0' && (i < (n - 1)))
		{
			src_d[i] = src_s[i];
			i++;
		}
		src_d[i] = '\0';
	}
	while (src_s[i] != '\0')
	{
		i++;
	}
	return (i);
}
