#include<stdio.h>
#include<unistd.h>
char    *ft_strrev(char *str)
{
    int  i, j;
    char temp;

    i = 0, j = 0;
    while (str[i])
    {
        i++;
    }
    i--;
   while (j < i)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
        j++;
    }
    return (str);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("%s", ft_strrev(argv[1]));
    }
}