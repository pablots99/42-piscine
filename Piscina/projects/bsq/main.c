/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:00:31 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/25 15:12:30 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

/*
	!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	IMPORTANTE HACER EL FREE DE PARAMETROS Y  TE LA TABLA
	¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡
*/
char	**iniciatab(char *buff)
{
	int i;
	int j;
	char **tab;
	int len;

	i = ft_atoi(buff);
	tab = malloc(i * sizeof(char *));
	j = 0;
	len = len_linea(buff);

	while (j < i)
	{
		tab[j] = malloc(len * sizeof(char));
		j++;
	}
	return tab;
}

char	**guarda_array(char *buff, char **tab)
{
	int vars[4];

	vars[0] = 0;
	vars[1] = 0;
	vars[2] = 0;
	vars[3] = 0;
	while (buff[vars[0]++] != 0)
	{
		if (buff[vars[0]] == '\n' && vars[3] == 0)
		{
			vars[3] = 1;
			vars[0]++;
		}
		if (vars[3] == 1 && vars[2] < ft_atoi(buff) && buff[vars[0]] != '\n')
		{
			tab[vars[2]][vars[1]] = buff[vars[0]];
			vars[1]++;
			if (buff[vars[0] + 1] == '\n')
			{
				vars[2]++;
				vars[1] = 0;
			}
		}
	}
	return (tab);
}
char	*parametros(char *buff)
{
	int i;
	char *params;

	params = malloc(3*4);
	i = 0;
	while (buff[i] != 0 && buff[i] <= 9 && buff[i] >= 0)
		i++;
	params[0] = buff[i];
	params[1] = buff[i + 1];
	params[2] = buff[i + 2];
	return (params);
}

// funcion que te devuelve 0 si el cuadadro de len n y con posicion x y es posiblo si no te devuelve 1
int 	cabe(char **tab, char *buff, int x, int y)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (i < len)
	{
		j = 0;
		while (j < len && tab[x + i][y + j] != parametros(buff)[0])
			j++;
		i++;
	}
	if (i == j)
		return (0);
	return (1);
}
void pondoses(char **tab, char buff)
{
	int i;
	int j;

	i = 0;
	while (i < )
	{
		/* code */
	}
	
}



voidcomparapos(char *tab, char *buff)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{

			j++;
		}
		i++;
	}
}

void	libera(char **tab, char *buff)
{
	int i;

	i = 0;
	while (i < len_linea(buff))
		free(tab[i]);
}

void	recorre(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			printf("%c", tab[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	char *buff;
	char **tab;
	i = 1;
	if (argc)
	{
		while (argv[i])
		{
			buff = leetablero(argv[i]);
			tab = guarda_array(buff, iniciatab(buff);
			pondoses(tab,buff);
			recorre(tab);
			i++;
		}
	}
	else
	{
		write(1, "Error", 5);
		buff = NULL;
	}
}