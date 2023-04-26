/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:25:02 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/26 19:21:00 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

// #include "../mlx_linux/mlx.h"
#include "../ft_printf/ft_printf.h"
#include "../gnl/get_next_line.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	**ft_parsing(int ac, char **av);
int		ft_have_error_with_param(int ac, char **av);
char	*ft_strcpy_sl(char *to_ret, char *to_cpy);
int		ft_count_line(char **av);
void	ft_free_tab_char(char **str);
int		ft_error_sl(char **map);
int		ft_check_horizontal(char **map);
int		ft_check_vertical(char **map);
int		ft_check_number_of_line(char **map);

#endif
