/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:56:42 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/12 13:30:37 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int main()
{
	void *mlx = mlx_init();
	void *win = mlx_new_window(mlx, 640, 360, "Tutorial Window - Create Image");

	void *image = mlx_new_image(mlx, 640, 360);
	
	// The following code goes here.

	mlx_loop(mlx);
}