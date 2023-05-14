/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:42:32 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/14 20:51:48 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_move_right(char **map, map_struct *lib)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (if_right(lib, map, i, j))
				return (1);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_move_left(char **map, map_struct *lib)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (if_left(lib, map, i, j))
				return (1);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_move_down(char **map, map_struct *lib)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (if_down(lib, map, i, j))
				return (1);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_move_up(char **map, map_struct *lib)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (if_up(lib, map, i, j))
				return (1);
			j++;
		}
		i++;
	}
	return (1);
}
