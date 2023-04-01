#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while(i < n - 1)
    {
        if (s1[i] != s2[i])
            break;
        i++;
    }

    return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        unsigned int num = atoi(argv[3]);
        printf("str1: %s\tstr2: %s\nft_strncmp: %d\n", argv[1], argv[2], ft_strncmp(argv[1], argv[2], num));
        printf("strncmp: %d\n", strncmp(argv[1], argv[2], num));
    }
    
    return 1;
}