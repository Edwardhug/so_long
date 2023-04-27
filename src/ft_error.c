/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:32:06 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/27 23:50:01 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_error_sl(char **map)
{
	if (ft_check_number_of_line(map) < 3)
		return (1);
	if (ft_check_form(map) == 1)
		return (1);
	if (ft_check_horizontal(map) == 1)
		return (1);
	if (ft_check_vertical(map) == 1)
		return (1);
	if (ft_character(map) != 1)
		return (1);
	if (ft_exit(map) != 1)
		return (1);
	if (ft_player(map) != 1)
		return (1);
	if (ft_item(map) < 1)
		return (1);
	if (ft_check_map(map) == 1)
		return (1);
	return (0);
}

int	ft_check_horizontal(char **map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map[i][j] != '\n')
	{
		if (map[i][j] != '1')
			return (1);
		j++;
	}
	j = 0;
	while (map[i + 1])
		i++;
	while (map[i][j] != '\0')
	{
		if (map[i][j] != '1')
			return (1);
		j++;
	}
}

int	ft_check_number_of_line(char **map)
{
	int i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

int ft_check_vertical(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i][j] != '\n')
		j++;
	j--;
	while (map[i])
	{
		if (map[i][0] != '1' || map[i][j] != '1')
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_form(char **map)
{
	int	size;
	int	i;

	size = ft_strlen_nl(map[0]);
	i = 0;
	while (map[i])
	{
		if (ft_strlen_nl(map[i]) != size)
			return (1);
		i++;
	}
	return (0);
}