/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:29:16 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/09 10:22:21 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int aux_x;
	int aux_y;

	while (aux_y < y)
	{
		aux_x = 0;
		while (aux_x < x)
		{
			if ((aux_x == 0 || aux_x == x - 1 || aux_y == 0 || aux_y == y - 1))
				if ((aux_x == 0 && aux_y == 0) ||
						(aux_x == x - 1 && aux_y == y - 1 && x != 1 && y != 1))
					ft_putchar('/');
				else if ((aux_x == x - 1 && aux_y == 0)
						|| (aux_x == 0 && aux_y == y - 1))
					ft_putchar('\\');
				else
					ft_putchar('*');
			else
				ft_putchar(' ');
			aux_x++;
		}
		ft_putchar('\n');
		aux_y++;
	}
}
