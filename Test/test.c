#include <stdio.h>
#include <unistd.h>

int main()
{
    const char *str = "Hello Pisciners";
    int i = 0;
    
    while (str[i])
    {
        if (i % 2 == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                char c = str[i] - ('a' - 'A');
                write(1, &c, 1);
            }
            else
            {
                write(1, &str[i], 1);
            }
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                char c = str[i] + ('a' - 'A');
                write(1, &c, 1);
            }
            else
            {
                write(1, &str[i], 1);
            }
        }
        i++;
    }
    return 0;
}
