/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:56:42 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/26 17:24:56 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// int main()
// {
// 	int height;
// 	int width;
	
// 	height = 0;
// 	width = 0;
// 	void *mlx = mlx_init();
// 	void *win = mlx_new_window(mlx, 640, 360, "Window");

// 	void *image = mlx_new_image(mlx, 640, 360);
// 	void *dino = mlx_xpm_file_to_image(mlx, "sprite/knight.xpm", &width, &height);
// 	if (dino == NULL)
// 	{
// 		ft_printf("wd");
// 		exit(EXIT_FAILURE);
// 	}
// 	mlx_put_image_to_window(mlx, win, dino, 40, 40);

// 	mlx_loop(mlx);
// }

int	main(int ac, char **av)
{
	char **map;

	map = ft_parsing(ac, av);
}