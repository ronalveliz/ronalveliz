/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 00:28:06 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/13 00:28:10 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	ig;

	ig = 0;
	while (s1[ig] == s2[ig] != '\0' && s2[ig] != '\0')
	{
		ig++;
	}
	return (s1[ig] - s2[ig]);
}
/*int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    int result;

    // Comparar las dos cadenas
    result = ft_strcmp(str1, str2);

    // Evaluar el resultado de la comparación
    if (result < 0)
        printf("'%s' es menor que '%s'\n", str1, str2);
    else if (result == 0)
        printf("'%s' es igual a '%s'\n", str1, str2);
    else
        printf("'%s' es mayor que '%s'\n", str1, str2);

    return 0;
}*/
