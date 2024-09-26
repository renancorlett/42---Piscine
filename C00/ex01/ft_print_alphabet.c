/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:00:00 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/07 09:47:59 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	abcdario;

	abcdario = 'a';
	while (abcdario <= 'z')
	{
		write(1, &abcdario, 1);
		abcdario++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);                                  
}
*/
