/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:59:15 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/03 20:32:57 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resultado;
	int	modulo;

	resultado = *a / *b;
	modulo = *a % *b;
	*a = resultado;
	*b = modulo;
}
/*int	main(void)
{
	int	num1;
	int	num2;
	int	*a;
	int	*b;

	num1 = 10;
	num2 = 2;
	a = &num1;
	b = &num2;
	ft_swap(a, b);
	printf("%d\n", num1);
	printf("%d\n", num2);
	return (0);
}*/
