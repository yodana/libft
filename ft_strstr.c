#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (!(needle[0]))
        return ((char *)haystack);
    while (haystack[i])
    {
        while (haystack[i] == needle[j])
        {
            i++;
            j++;
            if (needle[j] == '\0')
                return ((char*)haystack + i - j);
            if (!(haystack[i]))
                return (NULL);
        }
        j = 0;
        i++;
    }
    return (NULL);
}