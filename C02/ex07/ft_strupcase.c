/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:02:03 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/12 14:05:13 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
		}
		x++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "silva";

	ft_strupcase(str);
	printf("%s", str);
}*/
