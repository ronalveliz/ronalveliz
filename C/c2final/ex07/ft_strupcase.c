/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:41:54 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/06 22:42:22 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	original;

	original = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (original);
}
/*int	main(void)
{
	char src[] = "hello world";
	char *resul = ft_strupcase(src);
	int cont = 0;
	while (resul[cont] != '\0')
	{
		write(1, &resul[cont], 1);
		cont++;
	}
	write(1, "\n", 1);

	return (0);
}*/