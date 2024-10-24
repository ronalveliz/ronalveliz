/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:45:31 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/05/29 22:59:07 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	guard;

	guard = *a;
	*a = *b;
	*b = guard;
}
/*int	main(void)
{
	int num1;
	int num2;
	int *a;
	int *b;

	num1 = 1;
	num2 = 2;
	a = &num1;
	b = &num2;
	ft_swap(a, b);
	printf("%d\n",num1);
	printf("%d\n",num2);
	return (0);
}*/
