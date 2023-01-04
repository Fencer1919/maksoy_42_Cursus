/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:30:08 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/15 06:31:17 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	char	*zero;

	zero = str;
	while (len != 0)
	{
		*zero++ = 0;
		len--;
	}
}

/*int main()
{
    char a[] = "Mert";
    char c[] = "Aksoy";
    ft_bzero(a + 1, 2);
    bzero(c + 1, 2);
    printf("%s\n", a);
    printf("%s", c);
}
*/
