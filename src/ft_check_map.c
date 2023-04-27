/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:12:19 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/27 13:47:57 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_check_map(char **map)
{
	char **cpy;

	cpy = ft_charstr_cpy(map);
	if (!cpy)
		return (1);
	int	i;

	i = 0;
	while (cpy[i])
	{
		ft_printf("%s", cpy[i]);
		i++;
	}
	return (0);
}

char	**ft_charstr_cpy(char **map)
{
	char **cpy;
	int		i;

	i = 0;
	while (map[i])
		i++;
	cpy = malloc(sizeof(char *) * (i + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (map[i])
	{
		cpy[i] = ft_strdup(map[i]);
		if (!cpy[i])
		{
			ft_free_tab_char(cpy);
			return (NULL);
		}
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
