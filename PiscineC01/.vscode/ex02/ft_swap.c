#include<unistd.h>
#include<stdio.h>

void    ft_swap(int *a, int *b)
{
    int n;
    n = *a;
    *a = *b;
    *b = n;
}

int     main(void)
{
    int a, b;

    a = 3;
    b = 42;
    int *pa = &a;
    int *pb = &b;
    ft_swap(pa, pb);
    printf("%d\n %d", a, b);
    return 0;
}