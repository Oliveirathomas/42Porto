#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
    {
        i++;    
    }
     return(i);
}

int main(void)
{
    char *str;
    str = "Hello Pisciners";
    printf("%d", ft_strlen(str));
}