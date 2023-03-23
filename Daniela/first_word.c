#include <unistd.h>

void first_word(char *str)
{
    int i;

    i = 0;             
    while (str[i] == 'k' || str[i] )
    {
        i++;
    }
    while (str[i] != 'k' && str[i] )
    {
        write (1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    char *str;

    str = "Hello World,     Pisciners 42";
    first_word(str);
}
{    
    if (argc == 2)
    {
        first_word(argv[1]);
    }
    write (1, "k\n", 1);
}
