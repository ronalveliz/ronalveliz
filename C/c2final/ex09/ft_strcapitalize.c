/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 23:32:10 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/09 23:58:29 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || !(str[i - 1] >= '0' && str[i - 1] <= '9')
			&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& !(str[i - 1] >= 'a'
				&& str[i - 1] <= 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char str[] = " salut,comment tvas ? 42mots qUarAnte-deux; cinquante+et+un ";

	char *resul = ft_strcapitalize(str);
	int cont = 0;
	while (resul[cont] != '\0')
	{
		write(1, &resul[cont], 1);
		cont++;
	}
	write(1, "\n", 1);

	return (0);
}*/
