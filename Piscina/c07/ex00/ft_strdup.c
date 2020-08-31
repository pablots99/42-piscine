/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:54:13 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/25 19:17:13 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *aux;
	int i;

	i = 0;
	while (src[i])
		i++;
	aux = (char *)malloc(i * sizeof(char *));
	i = 0;
	while (src[i])
	{
		aux[i] = src[i];
		i++;
	}
	return (aux);
}