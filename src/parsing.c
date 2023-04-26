/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:34:43 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/26 17:22:08 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

char	**ft_parsing(int ac, char **av)
{
	if (ft_have_error_with_param(ac, av) == 1)
		return (NULL);
	
}

int	ft_have_error_with_param(int ac, char **av)
{
	int 	size;
	char	format[5];
	int		i;

	size = ft_strlen(av[1]);
	ft_strcpy_sl(format, ".ber");
	i = 0;
	if (ac != 2)
	{
		ft_printf("Error\nBad number of parameters\n");
		return (1);
	}
	if (size < 4)
	{
		ft_printf("Error\nBad map format\n");
		return (1);
	}
	size = size - 4;
	while (format[i])
	{
		if (format[i] != av[1][size + i])
		{
			ft_printf("Error\nBad map format\n");
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_count_line(char **av)
{
	int		fd;
	char	*line;
	int 	i;

	fd = open(av[1], O_RDONLY);
	i = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		free(line);
		i++;
	}
	free(line);
	close (fd);
	return (i);
}