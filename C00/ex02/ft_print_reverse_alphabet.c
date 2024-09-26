/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:15:08 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/07 09:53:44 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	abcdario;

	abcdario = 'z';
	while (abcdario >= 'a')
	{
		write (1, &abcdario, 1);
		abcdario--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
	
}
*/
