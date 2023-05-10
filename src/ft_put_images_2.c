/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_images_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:53:05 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/10 14:58:23 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int ft_put_coin(char **map, map_struct *lib)
{
	int	i;
	int	j;
	
	i = 0;
	// lib->coin = mlx_xpm_file_to_image(lib->mlx, "sprite/coin.xpm", &lib->width, &lib->height);
	if (lib->coin == NULL)
	{
		ft_printf("wd");
		exit(EXIT_FAILURE);
	}
	while (map[i])
	{
		j = 0;
		while (map[i][j] && map[i][j] != '\n')
		{
			if (map[i][j] == 'C')
				mlx_put_image_to_window(lib->mlx, lib->win, lib->coin, j * 89, i * 89);
			j++;
		}
		i++;
	}
	return (1);
}

int ft_put_door(char **map, map_struct *lib)
{
	int	i;
	int	j;
	
	i = 0;
	// lib->door = mlx_xpm_file_to_image(lib->mlx, "sprite/door.xpm", &lib->width, &lib->height);
	if (lib->door == NULL)
	{
		ft_printf("wd");
		exit(EXIT_FAILURE);
	}
	while (map[i])
	{
		j = 0;
		while (map[i][j] && map[i][j] != '\n')
		{
			if (map[i][j] == 'E')
				mlx_put_image_to_window(lib->mlx, lib->win, lib->door, j * 89, i * 89);
			j++;
		}
		i++;
	}
	return (1);
}

int ft_put_lock(char **map, map_struct *lib)
{
	int	i;
	int	j;
	
	i = 0;
	// lib->lock = mlx_xpm_file_to_image(lib->mlx, "sprite/lock.xpm", &lib->width, &lib->height);
	if (lib->lock == NULL)
	{
		ft_printf("wd");
		exit(EXIT_FAILURE);
	}
	while (map[i])
	{
		j = 0;
		while (map[i][j] && map[i][j] != '\n')
		{
			if (map[i][j] == 'L')
				mlx_put_image_to_window(lib->mlx, lib->win, lib->lock, j * 89, i * 89);
			j++;
		}
		i++;
	}
	return (1);
}