#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while(*str) 
    {
        if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <='Z')))
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
    printf("isAlpha returns: %d\n", ft_str_is_alpha(argv[1]));
    return 0;
}