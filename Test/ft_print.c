#include<unistd.h>

void    ft_print(void)
{
    char    n;

    n = '0';
    while(n <= '9')
    {
        write(1, &n, 1);
        n++;
    }
}
int main(void)
{
    ft_print();
    return (0);
}