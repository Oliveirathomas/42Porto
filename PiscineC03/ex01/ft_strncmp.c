#include<stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i ;
    unsigned int n ; 

    i = 0;
    while ((s1[i]  || s2[i] ) && i < n) 
    {
        if (s1[i] != s2[i]) 
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return 0;
}

/*
int main() 
{
    char str1[] = "Hello World!";
    char str2[] = "Hello";
    int result = ft_strncmp(str1, str2, 5);
    printf("%d\n", result);
    return 0;
}
*/