/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:58:03 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/14 16:09:00 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((x < n) && (src[x] != '\0'))
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

/*#include <stdio.h>

int 	main(void)
{
	char str1[] = "Bom";
	char str2[] = "Dia";
	int	n = 2;
	printf(("Antes str1 = %s e str2 = %s \n"), str1, str2);
	ft_strncpy(str1,str2,n);
	printf(("Depois str1 = %s e str2 = %s \n"), str1, str2);
}*/
