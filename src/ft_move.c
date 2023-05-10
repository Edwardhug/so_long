/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:42:32 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/10 16:28:48 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_move_right(char **map, map_struct lib)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P' && map[i][j + 1] != '1')
			{
				if (map[i][j + 1] == 'E')
					map[i][j + 1] = 'L';
				else
					map[i][j + 1] = 'P';
				map[i][j] = '0';
				// if (!ft_print_map(map, lib))
				// 	return (0);		// va avoir des problems de leaks
				return (1);
			}
			if (map[i][j] == 'L' && map[i][j + 1] != '1')
			{
				map[i][j] = 'E';
				map[i][j + 1] = 'P';
				// if (!ft_print_map(map, lib))
				// 	return (0);		// va avoir des problems de leaks
				return (1);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_move_left(char **map, map_struct lib)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P' && map[i][j - 1] != '1')
			{
				if (map[i][j - 1] == 'E')
					map[i][j - 1] = 'L';
				else
					map[i][j - 1] = 'P';
				map[i][j] = '0';
				// if (!ft_print_map(map, lib))
				// 	return (0);				// va avoir des problems de leaks
				return (1);
			}
			if (map[i][j] == 'L' && map[i][j - 1] != '1')
			{
				map[i][j] = 'E';
				map[i][j - 1] = 'P';
				// if (!ft_print_map(map, lib))
				// 	return (0);				// va avoir des problems de leaks
				return (1);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_move_down(char **map, map_struct lib)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P' && map[i + 1][j] != '1')
			{
				if (map[i + 1][j] == 'E')
					map[i + 1][j] = 'L';
				else
					map[i + 1][j] = 'P';
				map[i][j] = '0';
				// if (!ft_print_map(map, lib))
				// 	return (0);				// va avoir des problems de leaks
				return (1);
			}
			if (map[i][j] == 'L' && map[i + 1][j] != '1')
			{
				map[i][j] = 'E';
				map[i + 1][j] = 'P';
				// if (!ft_print_map(map, lib))
				// 	return (0);				// va avoir des problems de leaks
				return (1);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_move_up(char **map, map_struct lib)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P' && map[i - 1][j] != '1')
			{
				if (map[i - 1][j] == 'E')
					map[i - 1][j] = 'L';
				else
					map[i - 1][j] = 'P';
				map[i][j] = '0';
				// if (!ft_print_map(map, lib))
				// 	return (0);				// va avoir des problems de leaks
				return (1);
			}
			if (map[i][j] == 'L' && map[i - 1][j] != '1')
			{
				map[i][j] = 'E';
				map[i - 1][j] = 'P';
				// if (!ft_print_map(map, lib))
				// 	return (0);				// va avoir des problems de leaks
				return (1);
			}
			j++;
		}
		i++;
	}
	return (1);
}