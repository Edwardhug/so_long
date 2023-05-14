/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_images.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:55:13 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/14 21:21:22 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_init_images(t_map_struct *l)
{
	l->turtle = mlx_xpm_file_to_image(l->mlx, "s/turtle.xpm", &l->wi, &l->he);
	l->shore = mlx_xpm_file_to_image(l->mlx, "s/shore.xpm", &l->wi, &l->he);
	l->sea = mlx_xpm_file_to_image(l->mlx, "s/sea.xpm", &l->wi, &l->he);
	l->lock = mlx_xpm_file_to_image(l->mlx, "s/lock.xpm", &l->wi, &l->he);
	l->door = mlx_xpm_file_to_image(l->mlx, "s/door.xpm", &l->wi, &l->he);
	l->coin = mlx_xpm_file_to_image(l->mlx, "s/coin.xpm", &l->wi, &l->he);
	if (!l->turtle || !l->shore || !l->sea || !l->lock
		|| !l->door || !l->coin)
	{
		ft_printf("Error\nInit image problem");
		ft_free_all(l);
		exit(EXIT_FAILURE);
	}
}
