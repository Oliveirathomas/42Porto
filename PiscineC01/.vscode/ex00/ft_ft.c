#include<stdio.h>
#include<unistd.h>

void    ft_ft(int *nbr)
{
        *nbr = 42;
}

int     main(void)
{
        int     n;

        n = 2;
        ft_ft(&n);
        printf("%d", n);
        return 0;
}