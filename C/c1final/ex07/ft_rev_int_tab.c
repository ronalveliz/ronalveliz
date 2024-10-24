/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:01:39 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/03 22:04:07 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	contador;
	int	guardo;

	contador = 0;
	while (contador < size / 2)
	{
		guardo = tab[contador];
		tab[contador] = tab[size - contador - 1];
		tab[size - contador - 1] = guardo;
		contador++;
	}
}
/*
int	main(void)
{
	int	i;

	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Array de enteros
	int size = sizeof(array) / sizeof(array[0]); 
		// Calcula el número de elementos en el array
	ft_rev_int_tab(array, size); // Llama a la función para invertir el array
	// Imprimir el array invertido sin usar for
	i = 0;
	while (i < size)
	{
		char c = array[i] + '0';
			// Convierte el entero en su carácter correspondiente ('0' a '9')
		write(1, &c, 1);        
			// Escribe el carácter en la salida estándar (stdout)
		if (i < size - 1)
		{
			write(1, ",", 1);
				// Escribe una coma después del carácter si no es el último
		}
		i++;
	}
	return (0);
}*/
