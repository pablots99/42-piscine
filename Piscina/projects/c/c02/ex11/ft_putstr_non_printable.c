/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 11:51:04 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/17 13:41:28 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	exaconver(int n)
{
	char nuevo[2];
	char letras[6];

	letras = "a,b,c,d,e,f";
	if (n / 16 < 10)
	{
		nuevo[0] = '0' + n / 16;
	}
	else
	{
		nuevo[0] = 'a' + ((n / 16) - 10);
	}
	if (n % 16 < 10)
	{
		nuevo[1] = '0' + n % 16;
	}
	else
	{
		nuevo[1] = 'a' + ((n % 16) - 10);
	}
	write(1, "\\", 1);
	write(1, nuevo, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			exaconver(0 + str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
