#include "../includes/libft.h"
char*   ft_strnew(size_t size)
{
    char *str;
    size_t i;

    i = 0;
    if (!(str = (char*)malloc(sizeof(char) * size + 1)))
        return NULL;
    while(i <= size)
        str[i++] = '\0';
    return (str);
}
