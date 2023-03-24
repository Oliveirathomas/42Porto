#include<stdio.h>
#include<unistd.h>
int   main()
{
    char *str;
    int i;
    
    i = 0;
    str = "Hello Pisciners";

    while(str[i])
    {
        if(str[i] % 2 == 0)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                char c = str[i] += 32;
                write(1, &c, 1);
            }
            else
            {
                write(1, &str[i], 1);
            }
        }
        else 
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                char c = str[i] -= 32;
                write(1, &c, 1);
            }
            else
            {
                write(1, &str[i], 1);
            }
        }
        i++;
    }
    return (0);
}