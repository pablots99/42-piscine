/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:14:21 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/12 20:41:46 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	calculacifras(int n)
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
	long int	nuevo;

	if (nb < 0 && nb > -2147483648)
	{
		write(1, "-", 1);
		nb *= -1;
		return (nb);
		printf("fff");
	}
	else
	{
		nuevo = nb;
		nb *= -1;
		return (nuevo);
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
	if (nb == 0)
	{
		write(1, "0", 1);
	}
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
