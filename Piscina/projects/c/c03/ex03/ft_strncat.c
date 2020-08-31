/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 10:38:30 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/19 13:15:38 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	j = 0;
	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0 && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
