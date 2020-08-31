/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 20:42:39 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/17 17:25:31 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int n;

	n = size;
	i = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}
int main()
{

}
