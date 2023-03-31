#include <unistd.h>
void    ft_last_word(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
        i++;
    i -= 1;
    while (i > 0)
    {
        if (str[i] != 32 && str[i] != '\t')
        {
            j = i;
            i--;
            break;
        }
        i--;
    }
    while (i > 0)
    {
        if (str[i] == 32 || str[i] == '\t')
        {
            i++;
            break;
        }
        i--;
    }
    while ( i <= j)
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_last_word(argv[1]);
    write(1, "\n", 1);
    return 0;
}