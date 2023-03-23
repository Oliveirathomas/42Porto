void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
#include<stdio.h>
int main(void)
{
    //ft_swap(2,3);
    int a, b;

    a = 3;
    b = 4;
    printf("%d  %d", a, b);
    ft_swap(&a,&b);
    printf("%d  %d", a, b);
    return (0);
}