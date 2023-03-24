#include<unistd.h>

int main(void)
{
    int i;
    char *str;

    i = 0;
    str = "Hello Pisciners";
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] < 'm' || str[i] >= 'A' && str[i] < 'M')
        {
            str[i] += 13;
            //write(1, &str[i], 1);
        }
        if (str[i] >= 'm' && str[i] <='z' || str[i] >= 'M' && str[i] <= 'Z') 
        {
            str[i] -= 13;
            //write(1, &str[i], 1);
        }
        write(1, &str[i], 1);
        i++;
   }
    write(1, "\n", 1);
}