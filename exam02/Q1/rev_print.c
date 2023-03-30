#include <unistd.h>
int str_len(char *st_num)
{
    int i;

    i = 0;
    while (st_num[i] != '\0')
        i++;
    return (i);
}
void    ft_rev_print(char *strn)
{
    int j;

    j = str_len(strn);
    while (j >= 0)
    {
        write(1, &strn[j], 1);
        j--;
    }
}

int main(int argc, char **argv)
{
    ft_rev_print(argv[1]);
    return 0;
}