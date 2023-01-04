/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:38:13 by maksoy            #+#    #+#             */
/*   Updated: 2022/10/13 01:38:15 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data	data;

	data.mlx = mlx_init();
	if (argc != 2)
		return (1);
	ft_init_data(&data, argv[1]);
	mlx_loop(data.mlx);
	return (0);
}
