/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:47:23 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/20 20:07:03 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				longitudbase(char *base)
{
	int i;
	int j;
	int cond;

	cond = 0;
	i = 0;
	while (base[i] != 0)
	{
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
			{
				cond = 1;
			}
			j++;
		}
		if (cond == 1)
		{
			return (0);
		}
		i++;
	}
	return (i);
}

unsigned int	negativo(int n, int *ult)
{
	*ult = 0;
	if (n == -2147483648)
	{
		n--;
		*ult = 1;
	}
	if (n < 0 && n > -2147483648)
	{
		write(1, "-", 1);
		n *= -1;
	}
	return (n);
}

void			ft_putnbr_base(int nbr, char *base)
{
	int		nbase;
	char	numeros;
	int		resto;
	int		ult;

	numeros = 0;
	nbase = longitudbase(base);
	if (nbase > 0)
	{
		nbr = negativo(nbr, &ult);
		resto = nbr % nbase;
		nbr /= nbase;
		if (ult == 1)
			resto++;
		if (nbr <= nbase)
		{
			numeros = base[nbr];
			write(1, &numeros, 1);
		}
		if (resto < nbase)
			numeros = base[resto];
		if (nbr > nbase)
			ft_putnbr_base(nbr, base);
		write(1, &numeros, 1);
	}
}
int main()
{
	char base[] = "0123456789ABCD";
	ft_putnbr_base(-2147483, base);
	return (0);
}
