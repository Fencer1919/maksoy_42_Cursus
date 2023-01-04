/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <maksoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:38:06 by maksoy            #+#    #+#             */
/*   Updated: 2022/10/13 01:50:34 by maksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_xbutton(t_data *data)
{
	mlx_destroy_window(data->mlx, data->win);
	exit(0);
}

static void	ft_check_ber(char *path)
{
	int	i;

	i = ft_strlen2(path) - 1;
	if (path[i] != 'r' || path[i - 1] != 'e'
		|| path[i - 2] != 'b' || path[i - 3] != '.')
		ft_error();
}

void	ft_init_data(t_data *data, char *path)
{
	t_player	player;
	t_collect	collect;

	ft_check_ber(path);
	ft_calculate_map_size(data, path);
	ft_get_map(data, path);
	check_letter(data);
	ft_check_map(data);
	ft_valid_path(data, &player);
	ft_get_window(data);
	ft_put_map(data);
	ft_init_collect(data, &collect);
	ft_init_player(data, &player);
	data->player = player;
	data->collect = collect;
	mlx_string_put(data->mlx, data->win, 32, 32, 0, "0");
	mlx_hook(data->win, 17, 0, &ft_xbutton, data);
	mlx_hook(data->win, 2, 0, &ft_move, data);
}
