#include <unistd.h>

void	ft_countdown(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		write (1, &i, 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	ft_countdown();
}
