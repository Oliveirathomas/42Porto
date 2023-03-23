#include <stddef.h>
#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;

    char *final = dest;

    while(*final)
    {
        final++;
    }       

    while (i < nb && *src)
    {
        *final ++ = *src++;
        i++; 

    }    
    *final = '\0';
    
    return dest;
}

int main()
{
    char dest [] = "Hello";
    char src [] = "Pisciners";
    ft_strncat(dest,src,4);
    printf("%s", dest);
}