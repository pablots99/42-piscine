/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:04:38 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/27 12:10:29 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;

	(void)argc;
	i = 1;
	while (argv[i] && argc)
		i++;
	i--;
	while (i > 0)
	{
		j = 0;
		while (argv[j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i--;
		write(1, "\n", 1);
	}
}
