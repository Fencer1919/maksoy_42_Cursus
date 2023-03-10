/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_arg_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:30:44 by maksoy            #+#    #+#             */
/*   Updated: 2022/10/20 20:30:45 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	finder2(t_swap	*index)
{
	int	i;

	i = 1;
	while (i)
	{
		if (index->stack_a[index->a_len - i] == 0)
			return (i);
		i++;
	}
	return (0);
}

void	five_sort(t_swap *index)
{
	int	i;
	int	place;

	i = 0;
	place = finder2(index);
	while (i < index->a_len)
	{
		if (index->stack_a[index->a_len - 1] == 0)
		{
			push_b(index);
			four_sort(index);
			push_a(index);
			break ;
		}
		++i;
		if (place <= 2)
			rotate_a(index);
		else
			reverse_rotate_a(index);
	}
	exit_swap(index);
}
