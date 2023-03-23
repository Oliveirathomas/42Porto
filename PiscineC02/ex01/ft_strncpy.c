char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char src[] = "Hello Pisciners";
	char dest[15];
	ft_strncpy(dest, src, 8);
    printf("%s\n", src);
	printf("%s\n", dest);
}