/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:44:49 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/27 14:56:18 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
int f_strlen (char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);	
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *cad;
	int i;
	int len;
	int j;

	j = 0;
	i = 0;
	while (strs[i])
	{
		len += f_strlen(strs[i]);
		len +=f_strle(sep);
		i++;
	}
	cad = (char*)malloc(len*sizeof(char));
	i = 0;
	while (strs[i])
	{
		while (strs[i][j])
		{
			*cad = strs[i][j];
			cad++;
			j++;
		}
		i++;
	}
	if (size == 0)
	{
		free(cad);
	}
	return (cad);
}

int main()
{

}