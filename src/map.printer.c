/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:45:32 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/12 16:50:39 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_have_input(int keysym, map_struct *lib)
{
	if (keysym == 65307)
		ft_free_all(lib);
	if (keysym == 65363)
		ft_move_right(lib->map, lib);
	if (keysym == 65361)
		ft_move_left(lib->map, lib);
	if (keysym == 65364)
		ft_move_down(lib->map, lib);
	if (keysym == 65362)
		ft_move_up(lib->map, lib);
	// if ((keysym == 65361) || (keysym == 65362) || (keysym == 65363) ||
	// 	(keysym == 65364))
	// 		ft_printf("%d\n", lib->count++);
	if (!ft_print_map(lib->map, *lib))
		return (0);
	if(ft_exit(lib->map) == 0 && ft_item(lib->map) == 0)
		ft_free_all(lib);
	return (0);
}

int	handle_no_event(void *data)
{
	return (0);
}

int	ft_map_creator(char **map, map_struct lib)
{
	size_t	x;
	size_t	y;
	
	x = 89 * ft_strlen_nl(map[0]);
	y = 89 * ft_strlen_tab(map);
	lib.count = 1;
	lib.map = map;
	lib.he = 10;
	lib.wi = 100;
	lib.mlx = mlx_init();
	lib.win = mlx_new_window(lib.mlx, x, y, "Window");
	lib.image = mlx_new_image(lib.mlx, x, y);
	ft_init_images(&lib);
	if (!ft_print_map(map, lib))
		return (0);
	mlx_loop_hook(lib.mlx, &handle_no_event, &lib);
	mlx_key_hook(lib.win, ft_have_input, &lib);
	mlx_hook(lib.win, 17, 1L<<0, &ft_free_all, &lib);  //fenetre
	// mlx_hook(lib.mlx, 33, 1L<<17, &ft_free_all, &lib);  //input utilisateur
	mlx_loop(lib.mlx);
	return (1);
}

int	ft_print_map(char **map, map_struct lib)
{
	if (!ft_fill_sea(map, &lib))
		return (0);
	if (!ft_put_shore(map, &lib))
		return (0);
	if (!ft_put_turtle(map, &lib))
		return (0);
	if (!ft_put_coin(map, &lib))
		return (0);
	if (!ft_put_door(map, &lib))
		return (0);
	if (!ft_put_lock(map, &lib))
		return (0);
	return (1);
}
