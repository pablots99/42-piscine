/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 11:14:06 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/18 13:03:58 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int aux;

	aux = 0;
	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		aux = 0;
		while (to_find[j] != 0)
		{
			if (str[i + j] == to_find[j])
			{
				aux++;
			}
			j++;
		}
		if (aux == j)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
