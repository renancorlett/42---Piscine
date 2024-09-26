/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 08:59:11 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/12 12:39:06 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			x++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int 	main(void)
{
	char str[] = "2146634";

	printf("%d\n", ft_str_is_lowercase(str));
}*/
