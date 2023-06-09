/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:56:42 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/14 21:27:30 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int ac, char **av)
{
	t_map_struct	lib;
	char			**map;

	if (ac != 2)
	{
		ft_printf("Error\nInvalid number of argument\n");
		return (1);
	}
	map = ft_parsing(ac, av);
	if (!map)
		return (0);
	if (ft_error_sl(map) == 1)
	{
		ft_printf("Error\nInvalid map\n");
		ft_free_tab_char(map);
		return (0);
	}
	if (!ft_map_creator(map, lib))
	{
		ft_printf("Error\nLib problem\n");
	}
	ft_free_tab_char(map);
	return (0);
}
