int ft_strlen(char *anothin)
{
    int j;
    
    j = 0;
    while (anothin[j] != '\0')
        j++;
    return (j);
}
char    *ft_strrev(char *sumthn)
{
    int i;
    int length; 
    
    i = 0;
    length = ft_strlen(sumthn);
    while (i < length)
    {
        sumthn[i] = sumthn[length];
        i++;
        length--;
    }
    return (sumthn);
}
#include <stdio.h>
int main(int argc, char **argv)
{
    printf("Result: %s\n", ft_strrev(argv[1]));
    return 0;
}