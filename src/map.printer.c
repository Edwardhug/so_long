/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:45:32 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/03 18:21:39 by lgabet           ###   ########.fr       */
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
	if (!ft_fill_sea(map, &lib))
		return (0);
	if (!ft_put_shore(map, &lib))
		return (0);
	if (!ft_put_turtle(map, &lib))
		return (0);
	if (!ft_put_coin(map, &lib))
		return (0);
	if (!ft_put_door(map, &lib))
		return (0);
	return (1);
}

int ft_fill_sea(char **map, map_struct *lib)
{
	int	i;
	int	j;
	
	i = 0;
	lib->sea = mlx_xpm_file_to_image(lib->mlx, "sprite/sea.xpm", &lib->width, &lib->height);
	if (lib->sea == NULL)
	{
		ft_printf("wd");
		exit(EXIT_FAILURE);
	}
	while (map[i])
	{
		j = 0;
		while (map[i][j] && map[i][j] != '\n')
		{
			mlx_put_image_to_window(lib->mlx, lib->win, lib->sea, j * 89, i * 89);
			j++;
		}
		i++;
	}
	return (1);
}

int ft_put_shore(char **map, map_struct *lib)
{
	int	i;
	int	j;
	
	i = 0;
	lib->shore = mlx_xpm_file_to_image(lib->mlx, "sprite/shore.xpm", &lib->width, &lib->height);
	if (lib->shore == NULL)
	{
		ft_printf("wd");
		exit(EXIT_FAILURE);
	}
	while (map[i])
	{
		j = 0;
		while (map[i][j] && map[i][j] != '\n')
		{
			if (map[i][j] == '1')
				mlx_put_image_to_window(lib->mlx, lib->win, lib->shore, j * 89, i * 89);
			j++;
		}
		i++;
	}
	return (1);
}

int ft_put_turtle(char **map, map_struct *lib)
{
	int	i;
	int	j;
	
	i = 0;
	lib->turtle = mlx_xpm_file_to_image(lib->mlx, "sprite/turtle.xpm", &lib->width, &lib->height);
	if (lib->turtle == NULL)
	{
		ft_printf("wd");
		exit(EXIT_FAILURE);
	}
	while (map[i])
	{
		j = 0;
		while (map[i][j] && map[i][j] != '\n')
		{
			if (map[i][j] == 'P')
				mlx_put_image_to_window(lib->mlx, lib->win, lib->turtle, j * 89, i * 89);
			j++;
		}
		i++;
	}
	return (1);
}