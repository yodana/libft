#include "libft.h"

void    ft_strclr(char *s)
{
    bzero((void*)s, ft_strlen(s));
}