/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 20:37:27 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/27 14:43:31 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *tab;
	int i;
	int n;

	i = 0;
	n = min;
	if (min >= max)
	{
		*tab = '\0';
		return (tab);
	}
	tab = (int*)malloc((max-min)*sizeof(*tab));
	while (tab[i])
	{
		tab[i] = n;
		n++;
		i++;
	}

}