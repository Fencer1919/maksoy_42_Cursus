/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:30:31 by maksoy            #+#    #+#             */
/*   Updated: 2022/10/20 20:30:32 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bg_sort_min(t_swap *index)
{
	int	i;
	int	temp;
	int	len;

	i = 0;
	len = index->a_len;
	while (i < len)
	{
		index->sorted[i] = index->stack_a[i];
		i++;
	}
	i = 0;
	while (i < len - 1)
	{
		if (index->sorted[i] > index->sorted[i + 1])
		{
			temp = index->sorted[i];
			index->sorted[i] = index->sorted[i + 1];
			index->sorted[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}
