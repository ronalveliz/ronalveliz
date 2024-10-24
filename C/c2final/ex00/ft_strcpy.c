/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:31:38 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/06 22:32:35 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*destino;

	destino = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src ++;
		dest ++;
	}
	*dest = '\0';
	return (destino);
}
/*
int	main() {
    char	src[] = "Hello, World!";
    char	dest[50]; // Asegúrate de que el destino tenga suficiente espacio

    ft_strcpy(dest, src); // Llamamos a nuestra implementación de strcpy

    // Imprimimos la cadena destino para verificar el resultado
   
    printf("Cadena destino: %s\n", dest );

    return 0;
}*/
