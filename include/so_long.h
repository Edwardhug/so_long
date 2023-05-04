/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:25:02 by lgabet            #+#    #+#             */
/*   Updated: 2023/05/04 14:05:15 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "../mlx_linux/mlx.h"
#include "../Libft/all_libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef	struct map_struct_s
{
	char **map;
	int height;
	int width;
	void *mlx;
	void *win;
	void *image;
	void *sea;
	void *shore;
	void *turtle;
	void *coin;
	void *door;
	void *lock;
}			map_struct;

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
// char	*ft_strdup(char *s2);
int	    ft_check_map(char **map);
char	**ft_charstr_cpy(char **map);
int	    ft_check_around(char **map, int i, int j);
int 	ft_is_extendable(char **map);
// char	*ft_strcpy_sl(char *to_ret, char *to_cpy);
char	**ft_spread(char **map, int i, int j);
char	**ft_extend_p(char **map);
int		ft_check_finish(char **map);
int		ft_map_creator(char **map, map_struct lib);
int		ft_strlen_tab(char **str);
int		ft_print_map(char **map, map_struct lib);
int 	ft_fill_sea(char **map, map_struct *lib);
int 	ft_put_shore(char **map, map_struct *lib);
int 	ft_put_turtle(char **map, map_struct *lib);
int 	ft_put_coin(char **map, map_struct *lib);
int 	ft_put_door(char **map, map_struct *lib);
int		ft_move_right(char **map, map_struct lib);
int		ft_move_left(char **map, map_struct lib);
int		ft_move_down(char **map, map_struct lib);
int		ft_move_up(char **map, map_struct lib);
int 	ft_put_lock(char **map, map_struct *lib);

#endif
