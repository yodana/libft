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
        while (haystack[i + j] == needle[j])
        {
            j++;
            if (needle[j] == '\0')
                return ((char*)haystack + i);
            if (!(haystack[i + j]))
                return (NULL);
        }
        j = 0;
        i++;
    }
    return (NULL);
}
