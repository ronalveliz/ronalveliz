/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:40:50 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/05/30 20:52:28 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	letra;

	letra = 0;
	while (str[letra] != '\0')
	{
		letra++;
	}
	return (letra);
}

/*int main()
{

 char palabra [] = "hola";
 int resultado ;
 resultado = ft_strlen(palabra);
 printf("%d",resultado);
	return (0);
}*/
