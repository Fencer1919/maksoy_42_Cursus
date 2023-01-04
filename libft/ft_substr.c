/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:13:17 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/15 06:27:42 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*str2;
	size_t	str_len;

	if (str == NULL)
		return (NULL);
	str_len = ft_strlen((char *)str);
	if (start > str_len)
		return (ft_strdup(""));
	if (str_len - start >= len)
		str2 = (char *)malloc((len + 1) * sizeof(char));
	else
		str2 = (char *)malloc((str_len - start +1) * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	ft_strlcpy(str2, (str + start), (len + 1));
	return (str2);
}
