#include <unistd.h>
#include <stdio.h>
int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])  
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1 [] = "Hello";
	char	s2 [] = "Helloe";

	//ft_strcmp(s1,s2);
	printf("%d", ft_strcmp(s1, s2));

}
