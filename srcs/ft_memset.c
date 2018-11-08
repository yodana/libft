#include "../includes/libft.h"

void    *memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    s = malloc(sizeof(*s) * n);
    while (i < n)
        s = c;
    return (s);
}