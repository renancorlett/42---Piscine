/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:43:01 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/23 09:44:58 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*#include<stdio.h>
int	main(void)
{
	printf("%d \n", ft_is_prime(0));
	printf("%d \n", ft_is_prime(7));
	printf("%d \n", ft_is_prime(23));
	return (0);
}*/
