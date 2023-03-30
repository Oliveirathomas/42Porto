#include <unistd.h>

char    *ft_strrev(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

int	main(void)
{
	char	str [] = "Hello";
	ft_strrev(str);
	return (0);
}
