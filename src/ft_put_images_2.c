/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_images_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:53:05 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/12 17:21:47 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	short_image_window(map_struct *lib, int i, int j, void *img)
{
	mlx_put_image_to_window(lib->mlx, lib->win, img, j * 89, i * 89);
}

int	ft_put_coin(char **map, map_struct *lib)
{
	int	i;
	int	j;

	i = 0;
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
				short_image_window(lib, i, j, lib->coin);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_put_door(char **map, map_struct *lib)
{
	int	i;
	int	j;

	i = 0;
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
				short_image_window(lib, i, j, lib->door);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_put_lock(char **map, map_struct *lib)
{
	int	i;
	int	j;

	i = 0;
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
				short_image_window(lib, i, j, lib->lock);
			j++;
		}
		i++;
	}
	return (1);
}
