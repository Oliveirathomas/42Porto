#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] < 13))
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result = result + (str[i] - 48);
		i++;
	}
	result *= sign;
	return (result);
}

int	main(void)
{
	char	mystr[] = "   ---+--+1234ab567";

	printf("%d", ft_atoi(mystr));
	return(0);
}

