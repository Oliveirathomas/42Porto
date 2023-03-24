#include<stdio.h>
void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    
    i = 0;
    while (tab[i])
    {
        i++;
    }
    i--;
    while (i >= 0)
    {
        write(1, tab[i], 1);
        i--;
    }
}

int main()
{
    char 

     n = {1,2,3,4,5,6};

}