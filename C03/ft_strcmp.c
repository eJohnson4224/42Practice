#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0')
    {
        if(s1[i] != s2[i])
            break;
        i++;
    }   

    return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf("str1: %s\tstr2; %s\nft_strcmp: %d", argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
        printf("\nstrcmp: %d", strcmp(argv[1], argv[2]));
        
        return 0;
    }
    
    return 1;
}