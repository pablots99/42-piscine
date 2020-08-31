/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pasaparametros.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 12:24:30 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/21 12:35:02 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void len(char *cad)
{
	int i;

	i = 0;
	while (cad[i])
	{
		i++;
	}
	printf("%d,",i);
}
int main(int argc,char **argv)
{
	(void)	argc;
	len(argv[1]);
	len(argv[2]);

}