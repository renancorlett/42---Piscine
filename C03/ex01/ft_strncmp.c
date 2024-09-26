/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:01:22 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/15 08:48:47 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((s1[c] || s2[c]) && (c < n))
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}

/*#include <stdio.h>

int		main(void)
{
	unsigned int	n = 4;
	char s1[] = "Come";
	char s2[] = "Fome";
	
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}*/
