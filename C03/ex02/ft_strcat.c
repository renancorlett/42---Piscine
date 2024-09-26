/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:33:23 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/15 08:51:30 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	y;
	int	z;

	y = 0;
	while (dest[y])
	{
		y++;
	}
	z = 0;
	while (src[z])
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	dest[y] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char dest[] = "Ajuda ";
	char *src = "Senhor!";

	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
