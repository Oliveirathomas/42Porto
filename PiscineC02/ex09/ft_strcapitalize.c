#include<stdio.h>
#include<string.h>

char *ft_strcapitalize(char *str)
{
    int     i;

    i = 0;
    while(str[i])
    {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 48 && str[i] <= 57 || str[i] >= 97 && str[i] <= 122 )
        {
            if(str[i] >= 97 && str[i] <= 122)
            {
                str[i] -= 32;
            }
            if (str[i +1] >= 97 && str[i + 1] <= 122 || str[i] >= 48 && str[i] <= 57)
                {
                    str[i];
                }
            else if (str[i +1] >= 65 && str[i +1] <= 90)
            {
                str[i] +=32;
            }
        }
        i++;
    }
    return (str);
}

int main()
{ 
    char    str [] = "hELLO pIsCiNeRs, let SEE if wOrKS.";

    printf("%s", str);
    ft_strcapitalize(str);
    printf("%s", str);
    return(0);
}

