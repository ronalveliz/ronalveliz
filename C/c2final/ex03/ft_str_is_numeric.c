/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:34:59 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/06 22:35:16 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str ++;
	}
	return (1);
}
/*int main(void)
{
    char src[] = "dfhdf";
    
    int resultado = ft_str_is_numeric(src);
    int entregar = resultado + '0';
    write(1, &entregar,1);
    write(1, "\n", 1);
    return 0;
}*/
