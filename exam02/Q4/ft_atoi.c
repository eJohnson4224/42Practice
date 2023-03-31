int ft_atoi(char *str)
{
    int res;
    int sign;
    int i;

    i = 0;
    res = 0;
    sign = 1;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return sign*res;
}
#include <stdio.h>
int main(int argc, char **argv)
{
    printf("Result: %d\n", ft_atoi(argv[1]));
    return 0;
}
