/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorres <ptorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:02:20 by ptorres           #+#    #+#             */
/*   Updated: 2020/02/24 19:25:42 by ptorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	*leetablero(char *ruta);
void imprime_mapa(char *mapa);
char **guarda_array(char *buff,char **tab);
int	ft_atoi(char *str);
int len_linea(char *buff);
void libera(char **tab, char *buff);


