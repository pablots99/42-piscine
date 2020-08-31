/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkdict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:43:57 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/23 17:17:27 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void checkdict(char *dict)
{
	int i;
	int primer;

	primer = 0;
	i = 0;

	while (dict[i] != 0)
	{
		if (primer == 0 && dict[i] >= '0' && dict[i] <= '9')
			cheklines(&dict[i]);
		if (dict[i] == '\n' && dict[i + 1] != 0)
			cheklines(&dict[i + 1]);
		i++;
	}
}

void  numMax(char *buff)
{
	int i;
	int j;
	int aux;
	int max;
	
	max = 0;
	i = 0;
	while (buff[i] != 0)
	{
		if (buff[i] == ':')
		{
			j = 0;
			aux = 0;
			while (buff[i - j] != '\n' && buff[i - j] != '\0')
			{
				while (buff[i - j] == ' ' && buff[i - j] != '\0' && buff[i - j] != '\n')
					j++;
				if (buff[i - j] >= '0' && buff[i - j] <= '9' )
				{
					aux++;
				}
				j++;
			}
			if(aux >= max)
				max = aux;
		}
	}
}

