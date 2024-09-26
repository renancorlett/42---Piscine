/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 08:56:34 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/12 12:49:53 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	x;	

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z')
			|| (str[x] >= 'A' && str[x] <= 'Z'))
			x++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
	char str[] = "Acooooorda!!!";

	printf("%d\n",ft_str_is_alpha(str));
}*/
