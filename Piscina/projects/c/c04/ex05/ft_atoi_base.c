/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:19:56 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/20 18:07:38 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		longitudbase(char *base)
{
	int i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		i++;
	}
	return (i);
}

int		comparabase(char *base, char caracter, int *basepos)
{
	int i;

	i = 0;
	*basepos = 0;
	while (i < longitudbase(base))
	{
		if (caracter == base[i])
		{
			*basepos = i;
			return (1);
		}
		i++;
	}
	return (0);
}

void	empieza_acaba(char *str, int *pos, char *base, int *negativo)
{
	int i;
	int cond;
	int basepos;

	basepos = 0;
	*negativo = 0;
	cond = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (comparabase(base, str[i], &basepos) == 1 && cond == 0)
		{
			pos[0] = i;
			cond = 1;
		}
		if (comparabase(base, str[i + 1], &basepos) != 1 && cond == 1)
		{
			pos[1] = i;
			break ;
		}
		if (str[i] == '-')
			*negativo += 1;
		i++;
	}
	*negativo %= 2;
}

int		pasabase(char dig, int vueltas, char *base, int *basepos)
{
	int i;
	int nbase;
	int num;

	comparabase(base, dig, basepos);
	num = *basepos;
	nbase = longitudbase(base);
	i = 0;
	while (i < vueltas)
	{
		num *= nbase;
		i++;
	}
	return (num);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int pos[2];
	int num;
	int basepos;
	int negativo;

	negativo = 0;
	pos[1] = 0;
	pos[0] = 0;
	num = 0;
	empieza_acaba(str, pos, base, &negativo);
	i = pos[0];
	while (i <= pos[1])
	{
		if (negativo == 1)
			num -= pasabase(str[i], pos[1] - i, base, &basepos);
		else
			num += pasabase(str[i], pos[1] - i, base, &basepos);
		i++;
	}
	return (num);
}
