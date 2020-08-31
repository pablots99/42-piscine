/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:23:11 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/18 13:07:23 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		calculacifras(int n)
{
	int aux;
	int numero;

	aux = 0;
	numero = n;
	while (numero != 0)
	{
		aux++;
		numero = numero / 10;
	}
	return (aux);
}

int		negativo(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb *= -1;
		return (nb);
	}
	else if (nb < 0)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int		numero;
	int		aux;
	char	numeros[calculacifras(nb) + 1];

	nb = negativo(nb);
	aux = calculacifras(nb);
	numero = nb;
	while (aux > 0)
	{
		if (numeros[aux - 1] != '0')
		{
			numeros[aux - 1] = '0' + numero % 10;
			numero = numero / 10;
			aux--;
		}
	}
	write(1, numeros, calculacifras(nb));
}
