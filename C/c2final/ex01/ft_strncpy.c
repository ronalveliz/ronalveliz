/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:33:14 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/06 22:33:47 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	contador;

	contador = 0;
	while (contador < n && src[contador] != '\0')
	{
		dest[contador] = src[contador];
		contador++;
	}
	while (contador < n)
	{
		dest[contador] = '\0';
		contador++;
	}
	return (dest);
}
/*
int main(void)
{
    char src[] = "hola copia";
    char dest[100] = "";
    ft_strncpy(dest, src, 30);
    printf("%s",dest);
    return 0;
}*/
