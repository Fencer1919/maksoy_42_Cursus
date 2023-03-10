/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:08:49 by maksoy            #+#    #+#             */
/*   Updated: 2022/01/12 17:09:43 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int num)
{
	if ('A' <= num && 'Z' >= num)
		return (num + 32);
	return (num);
}
