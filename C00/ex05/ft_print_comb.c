/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 08:52:15 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/09 15:55:17 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != '7' || y != '8' || z != '9')
					write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
