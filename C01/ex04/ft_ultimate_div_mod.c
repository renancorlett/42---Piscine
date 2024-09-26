/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:23:52 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/12 16:55:31 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = x / *b;
	*b = x % *b;
}

/*#include <stdio.h>

int	main()
{
	int a = 4, b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return (0);
}*/
