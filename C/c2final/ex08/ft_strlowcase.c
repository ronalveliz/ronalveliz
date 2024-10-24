/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:44:10 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/06 22:44:50 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*original;

	original = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (original);
}
/*int	main(void)
{
	char src[] = "RONALD";
	char *resul = *ft_strlowcase(src);
	int cont = 0;
	while (resul[cont] != '\0')
	{
		write(1, &resul[cont], 1);
		cont++;
	}
	write(1, "\n", 1);

	return (0);
}*/
