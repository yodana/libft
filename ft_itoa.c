#include "libft.h"

char    *ft_itoa(int n)
{
    int i;
    int size;
    char *new;

    size = 0;
    if (n < 0)
        n = n * -1;
    i = n;
    while (i > 0)
    {
        size++;
        i = i / 10;
    }
    if (!(new = (char*)malloc(sizeof(char) * size)))
        return (NULL);
    i = size - 1;
    while (n > 0)
    {
        new[i] = (n % 10) + '0';
        n = n / 10;
        i--;
    }
    new[size] = '\0';
    return (new);
}