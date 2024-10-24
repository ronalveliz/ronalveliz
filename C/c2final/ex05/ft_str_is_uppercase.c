/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:37:07 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/06 22:37:21 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str ++;
	}
	return (1);
}
/*int main(void)
{
    char src[] = "D";
    int resul = ft_str_is_uppercase(src);
    int resulChar = resul + '0';
    write(1, &resulChar,1);
    write(1, "\n", 1);
    return 0;
}*/
