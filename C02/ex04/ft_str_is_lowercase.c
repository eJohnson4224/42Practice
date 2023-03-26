int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(!(str[i] >= 'a' && str[i] <= 'z'))
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
    printf("ft_str_is_lowercase returns: %d\n", ft_str_is_lowercase(argv[1]));
    return 0;
}