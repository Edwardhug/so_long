/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:34:43 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/26 16:50:03 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

char	**ft_parsing(int ac, char **av)
{
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