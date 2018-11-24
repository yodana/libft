#include "libft.h"

void    ft_strclr(char *s)
{
	if (s)
		bzero((void*)s, ft_strlen((const char*)s));
}
