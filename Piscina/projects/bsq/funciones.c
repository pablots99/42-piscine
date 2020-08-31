/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funciones.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:16:59 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/24 19:59:22 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_atoi(char *str)
{
	int n;
	int x;

	x = 0;
	n = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		++str;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			n++;
		++str;
	}
	while ((*str >= 48 && *str <= 57))
	{
		x = x * 10 + (*str - 48);
		++str;
	}
	if (n % 2 != 0)
	{
		n = -1;
		return (x * n);
	}
	return (x);
}

void	imprime_mapa(char *mapa)
{
	int i;

	i = 0;
	while (mapa[i])
	{
		write(1, &mapa[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

char	*leetablero(char *ruta)
{
	int		fd;
	char	*buff;
	ssize_t nr_bytes;

	buff = (char *)malloc(10000);
	fd = open(ruta, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error", 11);
	}
	else
	{
		nr_bytes = read(fd, buff, 10000);
		free(buff);
		close(fd);
		if (nr_bytes == 0)
			write(1, "vacio", 5);
	}
	return (buff);
}

int		len_linea(char *buff)
{
	int i;
	int cond;
	int aux;

	aux = 0;
	cond = 0;
	i = 0;
	while (buff[i] != 0)
	{
		if (buff[i] == '\n' && cond == 0)
			cond = 1;
		if (cond > 0 && buff[i] != '\n')
		{
			aux++;
			cond = 2;
		}
		if (cond == 2 && buff[i] == '\n')
			break ;
		i++;
	}
	return (aux);
}