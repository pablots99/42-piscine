/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 12:47:41 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/12 14:59:04 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char numeros[3];

	numeros[0] = '0';
	numeros[1] = '1';
	numeros[2] = '2';
	while (numeros[0] <= '7')
	{
		if (numeros[2] != '2')
			write(1, ", ", 2);
		write(1, &numeros, 3);
		if (numeros[2] < '9')
			numeros[2]++;
		else if (numeros[1] < '8')
		{
			numeros[1]++;
			numeros[2] = numeros[1] + 1;
		}
		else
		{
			numeros[0]++;
			numeros[1] = numeros[0] + 1;
			numeros[2] = numeros[1] + 1;
		}
	}
}
