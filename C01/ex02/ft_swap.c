/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:11:39 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/11 09:00:25 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	subs;

	subs = *a;
	*a = *b;
	*b = subs;
}
/*
#include <stdio.h>
int	main()
{
	int	x;
	int	y;

	x = 1;
	y = 2;

	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d", y);
}*/
