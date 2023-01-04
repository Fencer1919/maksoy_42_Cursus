/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:43:18 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/15 06:32:54 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int num)
{
	int		len;
	char	unum;

	unum = (unsigned char)num;
	len = ft_strlen((char *)(&str[0]));
	if (unum == '\0')
		return ((char *)(&str[len]));
	while (--len >= 0)
		if (str[len] == unum)
			return ((char *)(&str[len]));
	return (NULL);
}
