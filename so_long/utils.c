/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:39:43 by maksoy            #+#    #+#             */
/*   Updated: 2022/10/13 01:39:45 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_count(t_data *data)
{
	data->player.count++;
	ft_printf("%d\n", data->player.count);
}

void	ft_display_move(t_data *data)
{
	char	*str;

	str = ft_itoa(data->player.count);
	mlx_string_put(data->mlx, data->win, 32, 32, 0, str);
	free(str);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free(t_data *data, char **strs)
{
	int	i;

	i = 0;
	while (i < data->map_heigth)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

void	ft_display_and_put(t_data *data, void *img)
{
	ft_display_move(data);
	mlx_put_image_to_window(data->mlx, data->win,
		img, data->player.x * 64, data->player.y * 64);
}
