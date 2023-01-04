/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:25:30 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/07 22:39:21 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *str_d, const char *str_s, size_t n)
{
	size_t	str_i;
	size_t	len_strd;
	size_t	len_strs;

	len_strd = ft_strlen(str_d);
	len_strs = ft_strlen((char *)str_s);
	if (n <= len_strd)
		return (n + len_strs);
	str_i = 0;
	while (str_s[str_i] != '\0' && n > (len_strd + 1))
	{
		str_d[len_strd] = str_s[str_i];
		str_i++;
		len_strd++;
	}
	str_d[len_strd] = '\0';
	return (len_strd + ft_strlen((char *)(&str_s[str_i])));
}
