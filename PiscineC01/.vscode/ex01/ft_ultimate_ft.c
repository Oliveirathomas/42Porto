#include<stdio.h>
#include<unistd.h>

void    ft_ultimate_ft(int ***nbr)
{
    ***nbr = 42;
}

int     main(void)
{
    int     n, *nbr1, **nbr2, ***nbr3; 
    n = 3;
    nbr1 = &n;
    nbr2 = &nbr1;
    nbr3 = &nbr2;
    ft_ultimate_ft(&nbr2);
    printf("%d", n);
    return 0;
}