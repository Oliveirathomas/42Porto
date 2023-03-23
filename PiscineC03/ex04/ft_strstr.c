#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    while (*str)
    {
        char *start = str;
        char *pattern = to_find;

        while (*str && *pattern && (*str == *pattern))
        {
            str++;
            pattern++;
        }

        // If the entire pattern matches, return the starting position of the substring
        if (!*pattern)
        {
            return start;
        }

        // Otherwise, backtrack to the next potential starting position
        str = start + 1;
    }

    // If the pattern is not found, return NULL
    return NULL;
}

int main()
{
    char str[] = "Hello Pisciners";
    char to_find[] = "Pisciners";
    char *result = ft_strstr(str, to_find);
    if (result)
    {
        printf("%ld", result - str);
    }
    else
    {
        printf("Substring not found\n");
    }
    return 0;
}
