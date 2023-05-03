/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:56:42 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/03 11:33:10 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int main(int ac, char **av)
{
	map_struct s_lib;
	char **map;

	map = ft_parsing(ac, av);
	if (!map)
		return (0);
	if (ft_error_sl(map) == 1)
	{
		ft_printf("Error\nInvalid map\n");
		ft_free_tab_char(map);
		return (0);
	}
	if (!ft_map_creator(map,s_lib))
	{
		ft_printf("Error\nLib problem\n");
		ft_free_tab_char(map);
		return (0);
	}
}

// int	main(int ac, char **av)
// {
// 	char **map;

// 	map = ft_parsing(ac, av);
// 	if (!map)
// 		return (0);
// 	if (ft_error_sl(map) == 1)
// 	{
// 		ft_printf("Error\nInvalid map\n");
// 		ft_free_tab_char(map);
// 		return (0);
// 	}
// 	// int	i;

// 	// i = 0;
// 	// while (map[i])
// 	// {
// 	// 	ft_printf("%s", map[i]);
// 	// 	i++;
// 	// }
// }