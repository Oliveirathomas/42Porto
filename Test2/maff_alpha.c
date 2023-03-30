#include <unistd.h>

void	maff_alpha()
{
	int	i;
	char	l;

	i = 97;
	while (i <= 122)
	{
		if (i % 2 == 0)
		{
			l = i - 32;
			write(1, &l, 1);
		}
		else
		{
			l = i;
			write(1, &l, 1);
		}
		i++;
	}
}

int	main(void)
{
	maff_alpha();
	return (0);
}
