/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_images.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:55:13 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/10 15:00:40 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_init_images(map_struct *lib)
{
	lib->turtle = mlx_xpm_file_to_image(lib->mlx, "sprite/turtle.xpm", &lib->width, &lib->height);
	lib->shore = mlx_xpm_file_to_image(lib->mlx, "sprite/shore.xpm", &lib->width, &lib->height);
	lib->sea = mlx_xpm_file_to_image(lib->mlx, "sprite/sea.xpm", &lib->width, &lib->height);
	lib->lock = mlx_xpm_file_to_image(lib->mlx, "sprite/lock.xpm", &lib->width, &lib->height);
	lib->door = mlx_xpm_file_to_image(lib->mlx, "sprite/door.xpm", &lib->width, &lib->height);
	lib->coin = mlx_xpm_file_to_image(lib->mlx, "sprite/coin.xpm", &lib->width, &lib->height);
}