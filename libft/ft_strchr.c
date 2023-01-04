/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:10:46 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/15 07:11:54 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == (char)c)
			return ((char *)(str + index));
		index++;
	}
	if (str[index] == (char)c)
		return ((char *)(str + index));
	return (NULL);
}

/*
int main()
{
    char a[] = "hello";
    printf("%s", ft_strchr(a, 'l'));
}
*/
