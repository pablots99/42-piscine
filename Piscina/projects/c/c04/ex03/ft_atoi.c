/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:09:25 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/20 13:14:25 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		es_negativo(char *str)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while (str[i] != 0 &&
			(str[i] == ' ' || str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			cont++;
		}
		i++;
	}
	if (cont % 2 == 0)
	{
		return (0);
	}
	return (1);
}

void	empieza_acaba(char *str, int *pos)
{
	int i;
	int cond;

	cond = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] <= '9' && str[i] >= '0' && cond == 0)
		{
			pos[0] = i;
			cond = 1;
		}
		if (!(str[i + 1] <= '9' && str[i + 1] >= '0') && (cond == 1))
		{
			pos[1] = i;
			break ;
		}
		i++;
	}
}

int		pasaint(char dig, int ceros)
{
	int i;
	int num;

	i = 0;
	num = dig - 48;
	while (i < ceros)
	{
		num *= 10;
		i++;
	}
	return (num);
}

int		ft_atoi(char *str)
{
	int		pos[2];
	int		i;
	long	num;

	pos[0] = 0;
	pos[1] = 0;
	empieza_acaba(str, pos);
	num = 0;
	i = pos[0];
	while (i <= pos[1])
	{
		if (es_negativo(str) == 1)
			num -= pasaint(str[i], pos[1] - i);
		else
			num += pasaint(str[i], pos[1] - i);
		i++;
	}
	return (num);
}
