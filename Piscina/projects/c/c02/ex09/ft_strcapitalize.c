/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 19:42:15 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/13 20:41:52 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int primera;

	primera = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (primera == 0)
			{
				str[i] -= 32;
				primera = 1;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (!(str[i] >= '0' && str[i] <= '9'))
		{
			primera = 0;
		}
		i++;
	}
	return (str);
}
