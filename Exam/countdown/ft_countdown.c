#include<unistd.h>
#include<stdio.h>

void    ft_countdown()
{
    int     i;

    i = '0';
    while ( i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
}

int main(void)
{
    ft_countdown();
    return (0);
}