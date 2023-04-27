/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:25:02 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/27 12:08:53 by lgabet           ###   ########.fr       */
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

# ifndef PLAYER
#  define PLAYER 1
# endif

# ifndef ITEM
#  define ITEM 1
# endif

# ifndef EXIT
#  define EXIT 1
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
int 	ft_strlen_nl(char *str);
int	    ft_check_form(char **map);
int	    ft_character(char **map);
int	    ft_exit(char **map);
int	    ft_item(char **map);
int	    ft_player(char **map);

#endif
