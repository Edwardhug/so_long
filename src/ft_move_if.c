/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_if.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:37:03 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/14 20:53:38 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	if_right(map_struct *lib, char **map, int i, int j)
{
	if (map[i][j] == 'P' && map[i][j + 1] != '1')
	{
		if (map[i][j + 1] == 'E')
			map[i][j + 1] = 'L';
		else
			map[i][j + 1] = 'P';
		map[i][j] = '0';
		ft_printf("%d\n", lib->count++);
		return (1);
	}
	if (map[i][j] == 'L' && map[i][j + 1] != '1')
	{
		map[i][j] = 'E';
		map[i][j + 1] = 'P';
		ft_printf("%d\n", lib->count++);
		return (1);
	}
	return (0);
}

int	if_left(map_struct *lib, char **map, int i, int j)
{
	if (map[i][j] == 'P' && map[i][j - 1] != '1')
	{
		if (map[i][j - 1] == 'E')
			map[i][j - 1] = 'L';
		else
			map[i][j - 1] = 'P';
		map[i][j] = '0';
		ft_printf("%d\n", lib->count++);
		return (1);
	}
	if (map[i][j] == 'L' && map[i][j - 1] != '1')
	{
		map[i][j] = 'E';
		map[i][j - 1] = 'P';
		ft_printf("%d\n", lib->count++);
		return (1);
	}
	return (0);
}

int	if_down(map_struct *lib, char **map, int i, int j)
{
	if (map[i][j] == 'P' && map[i + 1][j] != '1')
	{
		if (map[i + 1][j] == 'E')
			map[i + 1][j] = 'L';
		else
			map[i + 1][j] = 'P';
		map[i][j] = '0';
		ft_printf("%d\n", lib->count++);
		return (1);
	}
	if (map[i][j] == 'L' && map[i + 1][j] != '1')
	{
		map[i][j] = 'E';
		map[i + 1][j] = 'P';
		ft_printf("%d\n", lib->count++);
		return (1);
	}
	return (0);
}

int	if_up(map_struct *lib, char **map, int i, int j)
{
	if (map[i][j] == 'P' && map[i - 1][j] != '1')
	{
		if (map[i - 1][j] == 'E')
			map[i - 1][j] = 'L';
		else
			map[i - 1][j] = 'P';
		map[i][j] = '0';
		ft_printf("%d\n", lib->count++);
		return (1);
	}
	if (map[i][j] == 'L' && map[i - 1][j] != '1')
	{
		map[i][j] = 'E';
		map[i - 1][j] = 'P';
		ft_printf("%d\n", lib->count++);
		return (1);
	}
	return (0);
}
