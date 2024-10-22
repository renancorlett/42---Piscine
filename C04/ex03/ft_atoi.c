#include <unistd.h>

int	ft_atoi(char *str)

{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || str[i] >= '\t' && str[i] <= '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{	
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= neg;
	return (result);
}	

#include <stdio.h>

int	main(void)

{
	printf("%i\n", ft_atoi("    -12334abv"));
	return (0);
}
