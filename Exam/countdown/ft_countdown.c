#include<unistd.h>
#include<stdio.h>

void    ft_countdown()
{
    int     i;

    i = 97;
    while ( i >= 122)
    {
        if ( i % 2 == 0)
        {
            i -= 32;
            write(1, &i, 1);
        }
        write(1, &i, 1);
        i++;
    }
}

int main(void)
{
    ft_countdown();
    return (0);
}