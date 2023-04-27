/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:26:58 by lgabet            #+#    #+#             */
/*   Updated: 2023/04/27 13:47:11 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

char	*ft_strdup(char *s2)
{
	int		len;
	char	*r;
	int		i;

	len = ft_strlen(s2);
	i = 0;
	r = malloc (sizeof(char) * len + 1);
	if (!r)
		return (NULL);
	if (len == 0)
	{
		r[0] = '\0';
		return (r);
	}
	while (i < len)
	{
		r[i] = s2[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}