#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i, j;

	i = 0, j = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 97;
			while (j >= 0)
			{
				write (1, &str[i], 1);
				j--;
			}
		}	
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 65;
			while (j >= 0)
			{
				write (1, &str[i], 1);
                                j--;
			}
		}
		else 
			write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1 , "\n", 1);
}
