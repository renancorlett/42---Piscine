/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:08:21 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/11 08:58:45 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
int main(void)
{
    int a;
    char b[3];
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;

    ft_ultimate_ft(&ptr8);  // Chama a função para atribuir 42 a 'a'

    // Converte o valor de 'a' em caracteres e armazena em 'b'
    b[0] = '0' + (a / 10);  // Primeiro dígito
    b[1] = '0' + (a % 10);  // Segundo dígito
    b[2] = '\n';            // Nova linha

    // Escreve a string 'b' no stdout
    write(1, b, 3);

    return (0);
}*/
