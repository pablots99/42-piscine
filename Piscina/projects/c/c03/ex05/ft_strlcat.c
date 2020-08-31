/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 11:35:11 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/19 14:13:21 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int				longitud(char *cad)
{
	int i;

	i = 0;
	while (cad[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	lensrc = longitud(src);
	lendest = longitud(dest);
	i = 0;
	if (lendest > lendest + size)
	{
		while (dest[lendest - 1 + i] != 0 && i < size - 1)
		{
			dest[lendest - 1 + i] = src[i];
			i++;
		}
		return (lendest + size);
	}
	return (lensrc + size);
}
