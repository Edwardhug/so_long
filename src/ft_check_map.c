/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:12:19 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/27 14:31:07 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// int	ft_check_map(char **map)
// {
// 	char **cpy;

// 	cpy = ft_charstr_cpy(map);
// 	if (!cpy)
// 		return (1);
// 	cpy = ft_extend_p(cpy);
// 	int	i;

// 	i = 0;
// 	while (cpy[i])
// 	{
// 		ft_printf("%s", cpy[i]);
// 		i++;
// 	}
// 	return (0);
// }

// char	**ft_charstr_cpy(char **map)
// {
// 	char **cpy;
// 	int		i;

// 	i = 0;
// 	while (map[i])
// 		i++;
// 	cpy = malloc(sizeof(char *) * (i + 1));
// 	if (!cpy)
// 		return (NULL);
// 	i = 0;
// 	while (map[i])
// 	{
// 		cpy[i] = ft_strdup(map[i]);
// 		if (!cpy[i])
// 		{
// 			ft_free_tab_char(cpy);
// 			return (NULL);
// 		}
// 		i++;
// 	}
// 	cpy[i] = 0;
// 	return (cpy);
// }

// char	**ft_extend_p(char **map)
// {
// 	int	i;
// 	int	j;

// 	while (ft_is_extendable(map))
// 	{
// 		i = 0;
// 		j = 0;
// 		while (map[i])
// 		{
// 			while (map[i][j])
// 			{
				
// 				if (map[i][j] = 'P')
// 				{
// 					if (ft_extend_to_close(&map, i, j) == 0)
// 						check = 0;
// 					break ;
// 				}
// 				j++;
// 			}
// 			i++;
// 		}
// 	}
// }

int	ft_is_extendable(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
			{
				if (ft_check_around(map, i, j))
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_around(char **map, int i, int j)
{
	if ((map[i - 1][j] == '0' || map[i - 1][j] == 'C' || map[i - 1][j] == 'E'))
		return (1);
	if ((map[i + 1][j] == '0' || map[i + 1][j] == 'C' || map[i + 1][j] == 'E'))
		return (1);
	if ((map[i][j - 1] == '0' || map[i][j - 1] == 'C' || map[i][j - 1] == 'E'))
		return (1);
	if ((map[i][j + 1] == '0' || map[i][j + 1] == 'C' || map[i][j + 1] == 'E'))
		return (1);
	return (0);
}