/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:58:33 by rcorlett          #+#    #+#             */
/*   Updated: 2024/09/11 10:11:05 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	if (!str)
		return (0);
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
/*
#include <stdio.h>
int main()
{
	int	x;
	char str[] = "Foooogo!!!";
	x = ft_strlen(str);
	printf("%d", x);
}*/
