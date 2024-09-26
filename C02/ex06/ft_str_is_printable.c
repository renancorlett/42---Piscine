/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:02:32 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/12 13:06:16 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 32 && str[x] <= 126)
			x++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "\n";

	printf("%d\n",ft_str_is_printable(str));
}*/
