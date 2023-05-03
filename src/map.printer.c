/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:45:32 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/03 16:32:33 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_map_creator(char **map, map_struct lib)
{
	int	x;
	int	y;
	
	x = 89 * ft_strlen_nl(map[0]);
	y = 89 * ft_strlen_tab(map);
	lib.height = 10;
	lib.width = 100;
	lib.mlx = mlx_init();
	lib.win = mlx_new_window(lib.mlx, x, y, "Window");
	lib.image = mlx_new_image(lib.mlx, x, y);
	
	if (!ft_print_map(map, lib))
		return (0);
	mlx_loop(lib.mlx);
	// ft_fill_sea
	// lib.sea = mlx_xpm_file_to_image(lib.mlx, "sprite/sea.xpm", &lib.width, &lib.height);
	// if (lib.sea == NULL)
	// {
	// 	ft_printf("wd");
	// 	exit(EXIT_FAILURE);
	// }
	// mlx_put_image_to_window(lib.mlx, lib.win, lib.sea, 0, 0);

	// mlx_loop(lib.mlx);
	return (1);
}

int	ft_print_map(char **map, map_struct lib)
{
	if (!ft_fill_sea(map, lib))
		return (0);
	return (1);
}

int ft_fill_sea(char **map, map_struct lib)
{
	int	i;
	int	j;
	
	i = 0;
	lib.sea = mlx_xpm_file_to_image(lib.mlx, "sprite/sea.xpm", &lib.width, &lib.height);
	if (lib.sea == NULL)
	{
		ft_printf("wd");
		exit(EXIT_FAILURE);
	}
	while (map[i])
	{
		j = 0;
		while (map[i][j] && map[i][j] != '\n')
		{
			mlx_put_image_to_window(lib.mlx, lib.win, lib.sea, j * 89, i * 89);
			j++;
		}
		i++;
	}
	return (1);
}