/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:34:11 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/06 22:34:30 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z')
				|| (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str ++;
	}
	return (1);
}
/*int main(void)
{
    char src[] = "564564s";
    
    int resultado = ft_str_is_alpha(src);
    int entregar = resultado + '0';
    write(1, &entregar,1);
    write(1, "\n", 1);
    return 0;
}*/
