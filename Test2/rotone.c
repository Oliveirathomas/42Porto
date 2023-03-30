#include <unistd.h>
#include <stdio.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
		{
			str[i] += 1;
			write (1, &str[i], 1);
		}
		else if (str[i] == 'z' && str[i] == 'Z')
		{
			str[i] -= 25;
			write (1, &str[i], 1);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;	
	}
}

int	main(void)
{


	char str [] = "Hello Pisciners";
	rotone(str);
	return (0);
}
