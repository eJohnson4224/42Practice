#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *sunm;
    size_t bytes_to_allocate;
    int i;

    bytes_to_allocate = (end - start + 1) * sizeof(int);
    sunm = (int*)malloc(bytes_to_allocate);
    i = 0;

    while (start <= end)
    {
        sunm[i] = start;
        start++;
        i++;
    }

    return sunm;
}

int main()
{
    int *result = ft_range(-5, 9);

    // 0 is being recognized as NULL
    for(int i = 0; result[i] != '\0'; i++)
    {
        printf("Result: %d\n", result[i]);
    }

    free (result);

    return 0;
}