/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:39:35 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/17 13:34:04 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>



void *ft_print_memory(void *addr, unsigned int size)
{	
	void **direccion;
	int i;
	i=0;
	if(size > 0)
	{
		while(i < size)
		{
			printf("%p",&addr[i]);
			write(1,": ",2);
			write(1,&addr[i],16);
			write(1,"\n",1);
			i++;
		}

	}
	return(addr);
}

int main()
{
	unsigned int size = 4;
	
	char contenido[4][16]={"kdjoedyfheudhej","dkejdlapeirjfldk","dpeoritkskdkfksw","dosjekfldosejfir"};
	void *addr= *contenido;
	ft_print_memory(addr, size);
}
