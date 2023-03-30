int ft_strlen(char *str)
{
	int	i;

	i = 0;
    while (*str)
    {
        ++str; 
        i++;
    }
    return (i);
}
/*#include <stdio.h>
int main()
{
	char thing[] = "This string should be 32 chars?";
	printf("Result: %d", ft_strlen(thing));
	return 0;
}*/