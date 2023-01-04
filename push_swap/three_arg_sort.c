/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_arg_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:32:04 by maksoy            #+#    #+#             */
/*   Updated: 2022/10/20 20:32:06 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_swap *index)
{
	if (index->stack_a[2] > index->stack_a[1]
		&& index->stack_a[2] > index->stack_a[0])
		rotate_a(index);
	if (index->stack_a[1] > index->stack_a[2]
		&& index->stack_a[1] > index->stack_a[0])
		reverse_rotate_a(index);
	if (index->stack_a[2] > index->stack_a[1])
		swap_a(index);
}
