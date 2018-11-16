#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    int j;

    i = 0;
    j = 0;
    if (!(needle[0]))
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        while (haystack[i] == needle[j])
        {
            i++;
            j++;
            if (needle[j] == '\0')
                return (( char*)haystack + i - j);
            if (!(haystack[i]) || i >= len)
                return (NULL);
        }
        j = 0;
        i++;
    }
    return (NULL);

}