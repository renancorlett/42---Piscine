/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:04:05 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/12 09:31:15 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] += 32;
		}
		x++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "SILVA";

	ft_strlowcase(str);
	printf("%s", str);
}*/
