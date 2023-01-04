/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:32:00 by maksoy            #+#    #+#             */
/*   Updated: 2022/10/20 20:32:01 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_swap	*index)
{
	int	temp;

	if (index->a_len < 2)
		return ;
	temp = index->stack_a[index->a_len - 1];
	index->stack_a[index->a_len - 1] = index->stack_a[index->a_len - 2];
	index->stack_a[index->a_len - 2] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_swap	*index)
{
	int	temp;

	if (index->b_len < 2)
		return ;
	temp = index->stack_b[index->b_len - 1];
	index->stack_b[index->b_len - 1] = index->stack_b[index->b_len - 2];
	index->stack_b[index->b_len - 2] = temp;
	write(1, "sb\n", 3);
}

void	swap_ss(t_swap	*index)
{
	int	temp;

	if (index->a_len < 2 || index->b_len < 2)
		return ;
	temp = index->stack_a[index->a_len - 1];
	index->stack_a[index->a_len - 1] = index->stack_a[index->a_len - 2];
	index->stack_a[index->a_len - 2] = temp;
	temp = index->stack_b[index->b_len - 1];
	index->stack_b[index->b_len - 1] = index->stack_b[index->b_len - 2];
	index->stack_b[index->b_len - 2] = temp;
	write(1, "ss\n", 3);
}
