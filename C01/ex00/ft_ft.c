/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:08:21 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/11 08:54:25 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main()
{
    int a;
    char b[3];
    int *ptr;

    ptr = &a;
    ft_ft(ptr);  // Chama a função para atribuir 42 a 'a'

    // Converte o valor de 'a' em caracteres e armazena em 'b'
    b[0] = '0' + (a / 10);  // Primeiro dígito
    b[1] = '0' + (a % 10);  // Segundo dígito
    b[2] = '\n';            // Nova linha

    // Escreve a string 'b' no stdout
    write(1, b, 3);

    return (0);
}*/
