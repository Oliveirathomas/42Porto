#include<unistd.h>

void ft_inter(char *str1, char *str2)
{
    int i,j;

    i = 0, j = 0;
    while (str1[i] && str2[j])
    {
        if(str1[i] == str2[j])
        {
            write(1, &str1[i], 1);
        }
        i++;
        j++;
    }



}
Hello pisciners
hlipchydtntdhytdnhnthd


int main(int argc, char **argv)
{
    if (argc ==2)
    {
        ft_inter(argv[1][2]);
    }
    write(1, "\n", 1);


}