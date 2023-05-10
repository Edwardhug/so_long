/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:36:37 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/10 14:37:05 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

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
			if (map[i][j] == '0')
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