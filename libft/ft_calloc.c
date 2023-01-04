/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:21:54 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/15 07:13:15 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = (char *)malloc(count * size);
	if (!str)
		return (0);
	return (ft_memset(str, 0, count * size));
}

/*
int main()
{
    int *a = ft_calloc(3, sizeof(int));
    printf("%d", *a);
}
*/
