#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (haystack[i])
    {
        while (haystack[i] == needle[j])
        {
            i++;
            j++;
            if (needle[j] == '\0')
                return ((char*)haystack + i - j);
        }
        i++;
    }
    return (NULL);
}