/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 08:59:59 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/12 12:36:17 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	x;	

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			x++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "ABC";

	printf("%d\n", ft_str_is_uppercase(str));
}*/
