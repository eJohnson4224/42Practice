int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

#include <stdio.h>
int main(int argc, char **argv)
{
    printf("%d\n", argc);
    printf("ft_str_is_uppercase returns: %d\n", ft_str_is_uppercase(argv[1]));
    return 0;
}