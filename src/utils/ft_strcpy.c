/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:34:29 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/26 16:45:48 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

char	*ft_strcpy_sl(char *to_ret, char *to_cpy)
{
	int	i;

	i = 0;
	while (to_cpy[i])
	{
		to_ret[i] = to_cpy[i];
		i++;
	}
	to_ret[i] = 0;
	return (to_ret);
}