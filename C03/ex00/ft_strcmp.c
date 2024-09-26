/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:05:21 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/15 08:41:06 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

/*#include <stdio.h>

int     main()
{
	printf("%d", ft_strcmp("Hello", "Hello."));
	printf("\n%d", ft_strcmp("Hello", "He"));
	printf("\n%d", ft_strcmp("He", "Hello"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}*/
