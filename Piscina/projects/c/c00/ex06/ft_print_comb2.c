/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:53:17 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/11 20:47:42 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	print(int num)
{
	char numero;

	numero = '0' + num;
	write(1, &numero, 1);
}

void	ft_print_comb2(void)
{
	int numero1;
	int numero2;

	numero1 = 0;
	while (numero1 <= 98)
	{
		numero2 = numero1 + 1;
		while (numero2 <= 99)
		{
			print(numero1 / 10);
			print(numero1 % 10);
			write(1, " ", 1);
			print(numero2 / 10);
			print(numero2 % 10);
			if ((numero1 != 98) || (numero2 != 99))
			{
				write(1, ", ", 2);
			}
			numero2++;
		}
		numero1++;
	}
}
