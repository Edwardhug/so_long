/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 22:07:40 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/27 23:48:45 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

char	**ft_spread(char **map, int i, int j)
{
	if ((map[i - 1][j] == '0' || map[i - 1][j] == 'C' || map[i - 1][j] == 'E'))
		map[i - 1][j] = 'P';
	if ((map[i + 1][j] == '0' || map[i + 1][j] == 'C' || map[i + 1][j] == 'E'))
		map[i + 1][j] = 'P';
	if ((map[i][j - 1] == '0' || map[i][j - 1] == 'C' || map[i][j - 1] == 'E'))
		map[i][j - 1] = 'P';
	if ((map[i][j + 1] == '0' || map[i][j + 1] == 'C' || map[i][j + 1] == 'E'))
		map[i][j + 1] = 'P';
	return (map);
}

int	ft_check_finish(char **map)
{
	if (ft_exit(map) > 0)
		return (0);
	if (ft_item(map) > 0)
		return (0);
	return (1);
}