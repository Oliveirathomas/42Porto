#include <unistd.h>

void	putchar(char a)
{
	write (1, &a, 1);
}

void	fizzbuzz()
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (n % 3 == 0) 
			write (1, "fizz", 4);
		else if (n % 5 == 0)
			write (1, "buzz", 4);
		else
		{
			if (n > 9)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);			
			}
			else 
				putchar(n + 48);
		}
		write (1, "\n", 1);
		n++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}
