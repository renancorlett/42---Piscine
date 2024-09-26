/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:17:05 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/12 12:52:05 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= '0' && str[x] <= '9')
			x++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
	char str[] = "1";

	printf("%d\n", ft_str_is_numeric(str));
}*/
