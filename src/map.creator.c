/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.creator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:21:52 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/03 11:50:31 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_map_creator(char **map, map_struct lib)
{	
	lib.height = 10;
	lib.width = 100;
	lib.mlx = mlx_init();
	lib.win = mlx_new_window(lib.mlx, 640, 360, "Window");

	lib.image = mlx_new_image(lib.mlx, 640, 360);
	lib.sea = mlx_xpm_file_to_image(lib.mlx, "sprite/sea.xpm", &lib.width, &lib.height);
	if (lib.sea == NULL)
	{
		ft_printf("wd");
		exit(EXIT_FAILURE);
	}
	mlx_put_image_to_window(lib.mlx, lib.win, lib.sea, 0, 0);

	mlx_loop(lib.mlx);
	return (1);
}