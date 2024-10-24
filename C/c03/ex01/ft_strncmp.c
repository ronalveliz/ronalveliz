/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 05:06:03 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/13 05:11:01 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*int main()
{
	char str1[] = "apple";
	char str2[] = "apple";
	int memoria = 2;
	int resul = ft_strncmp(str1, str2, memoria);
	if (resul < 0)
		printf("'%s' es menor que '%s' en los primeros %u caracteres\n", str1,
			str2, memoria);
	else if (resul == 0)
		printf("'%s' es igual que '%s' en los primeros %u caracteres\n", str1,
			str2, memoria);
	else
		printf("'%s' es mayor que '%s' en los primeros %u caracteres\n", str1,
			str2, memoria);
}*/
