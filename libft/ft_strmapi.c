/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 06:50:17 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/17 21:54:32 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*str;

	index = 0;
	if (!s)
		return (0);
	str = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (!str)
		return (0);
	while (s[index])
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}

/*
char f(unsigned int a, char s)
{
    return (s - 32);
}
int main()
{
    printf("%s", ft_strmapi("Mert", f));
}
*/
