/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:36:14 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/17 19:27:04 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int aux;

	aux = 0;
	i = 0;
	while (dest[i] != 0 || src[aux] != 0)
	{
		if (dest[i] != 0)
			i++;
		if (src[aux] != 0)
			aux++;
	}
	dest[i + aux] = 0;
	j = 0;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
