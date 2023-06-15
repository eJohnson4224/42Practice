#include <stdio.h>
#include <stdlib.h>

char    *get_next_line(int fd)
{
    char    *buff;
    size_t  line_size;

    line_size = read(fd, NULL, 1);

}

int main()
{
    char    *res;
    int f;
    
    f = open("text.txt", O_RDONLY);
    res = get_next_line(f);
    if (!res)
    {
        close(f);
        return (1);
    }
    else
        printf ("res: \s\n", *res);
    close (f);

    return (0);
}