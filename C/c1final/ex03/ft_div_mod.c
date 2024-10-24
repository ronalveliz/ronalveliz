/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 23:40:08 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/06/03 22:19:24 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*p1;
	int	*p2;
	
	a = 20;
	b = 2;
	p1 = &div;
	p2 = &mod;
	ft_div_mod (a, b, p1, p2);
	printf("resultado %d y modulo %d ", div ,mod);
	return 0;	
}*/
