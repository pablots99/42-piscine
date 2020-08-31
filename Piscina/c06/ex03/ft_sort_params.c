/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:04:29 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/27 12:17:21 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;
	unsigned int aux;

	aux = 0;
	i = 0;
	while ((s1[i] != 0 || s2[i] != 0))
	{
		if (s1[i] == s2[i])
		{
			aux++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (i - aux);
}

void	ordena(char **arg)
{
	int		i;
	int		j;
	int		k;
	char	*num;

	num = 0;
	i = 1;
	while (arg[i])
	{
		j = i + 1;
		while (arg[j])
		{
			k = 0;
			if (ft_strcmp(arg[i], arg[j]) > 0)
			{
				num = arg[i];
				arg[i] = arg[j];
				arg[j] = num;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	(void)argc;
	ordena(argv);
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
