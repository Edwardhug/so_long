/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:47:44 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/27 13:06:52 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_player(char **map)
{
	int	p;
	int i;
	int	j;

	i = 0;
	p = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j] && map[i][j] != '\n')
		{
			if (map[i][j] == 'P')
				p++;
			j++;
		}
		i++;
	}
	return (p);
}

int	ft_item(char **map)
{
	int	c;
	int i;
	int	j;

	i = 0;
	c = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j] && map[i][j] != '\n')
		{
			if (map[i][j] == 'C')
				c++;
			j++;
		}
		i++;
	}
	return (c);
}

int	ft_exit(char **map)
{
	int	e;
	int i;
	int	j;

	i = 0;
	e = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j] && map[i][j] != '\n')
		{
			if (map[i][j] == 'E')
				e++;
			j++;
		}
		i++;
	}
	return (e);
}

int	ft_character(char **map)
{
	int	count;
	int i;
	int	j;

	i = 0;
	count = 1;
	while (map[i])
	{
		j = 0;
		while (map[i][j] && map[i][j] != '\n')
		{
			if (map[i][j] != 'P' && map[i][j] != 'C' && map[i][j] != 'E'
				&& map[i][j] != '1' && map[i][j] != '0')
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
