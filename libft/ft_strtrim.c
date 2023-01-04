/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:02:51 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/17 21:55:03 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		set_start_index;
	size_t		set_end_index;

	if (!s1 || !set)
		return (0);
	set_start_index = 0;
	set_end_index = ft_strlen((char *) s1);
	while (ft_strchr(set, s1[set_start_index]) && s1[set_start_index] != '\0')
		set_start_index++;
	while (ft_strchr(set, s1[set_end_index]) && set_end_index != '\0')
		set_end_index--;
	if ((int)(set_end_index - set_start_index + 1) <= 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, set_start_index,
			(set_end_index - set_start_index) + 1));
}

/*
int main() {
    printf("%s\n", ft_strtrim("Merhaba Dünya", "rMyae"));
}
*/
