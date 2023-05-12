/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:35:28 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/12 17:01:38 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_free_tab_char(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	free_images(map_struct *lib)
{
	if (lib->turtle)
		mlx_destroy_image(lib->mlx, lib->turtle);
	if (lib->sea)
		mlx_destroy_image(lib->mlx, lib->sea);
	if (lib->shore)
		mlx_destroy_image(lib->mlx, lib->shore);
	if (lib->coin)
		mlx_destroy_image(lib->mlx, lib->coin);
	if (lib->door)
		mlx_destroy_image(lib->mlx, lib->door);
	if (lib->lock)
		mlx_destroy_image(lib->mlx, lib->lock);
	mlx_destroy_image(lib->mlx, lib->image);
}

int	ft_free_all(map_struct *lib)
{
	free_images(lib);
	mlx_destroy_window(lib->mlx, lib->win);
	mlx_destroy_display(lib->mlx);
	ft_free_tab_char(lib->map);
	free(lib->mlx);
	exit(EXIT_SUCCESS);
	return (0);
}