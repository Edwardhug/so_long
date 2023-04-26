/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:32:06 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/26 19:29:03 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_error_sl(char **map)
{
	if (ft_check_number_of_line(map) < 3)
		return (1);
	if ((ft_check_horizontal(map) || ft_check_vertical(map)) == 1)
		return (1);
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
	while (map[i][j] != '\0' && map[i][j] != '\n')
		j++;
	while (map[i])
	{
		if (map[i][0] != '1' || map[i][j] != '1')
			return (1);
		i++;
	}
	return (0);
}