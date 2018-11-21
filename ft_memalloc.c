#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void    *memory_zone;
    if (!(memory_zone = malloc(size)))
        return (NULL);
    bzero(memory_zone, size);
    return (memory_zone);
}
