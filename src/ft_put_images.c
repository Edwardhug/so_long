/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:36:37 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/12 17:22:13 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_fill_sea(char **map, map_struct *lib)
{
	int	i;
	int	j;

	i = 0;
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
				short_image_window(lib, i, j, lib->sea);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_put_shore(char **map, map_struct *lib)
{
	int	i;
	int	j;

	i = 0;
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
				short_image_window(lib, i, j, lib->shore);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_put_turtle(char **map, map_struct *lib)
{
	int	i;
	int	j;

	i = 0;
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
				short_image_window(lib, i, j, lib->turtle);
			j++;
		}
		i++;
	}
	return (1);
}
