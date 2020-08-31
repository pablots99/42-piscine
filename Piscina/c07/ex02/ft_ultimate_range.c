/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 20:45:28 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/27 14:43:36 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;
	int n;

	i = 0;
	n = min;
	if (min >= max)
	{
		*tab = '\0';
		return (tab);
	}
	tab = (int*)malloc((max-min)*sizeof(*tab));
	while (n <= max)
	{
		tab[i] = n;
		n++;
		i++;
	}

}

int main()
{

}