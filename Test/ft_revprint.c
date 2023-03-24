#include<unistd.h>
#include<stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int j;
    char temp;

    i = 0;
    j = 0;
    while(str[i])
    {
        i++;
    }
    i--;
    while(i > j)
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
    return (0);
}

